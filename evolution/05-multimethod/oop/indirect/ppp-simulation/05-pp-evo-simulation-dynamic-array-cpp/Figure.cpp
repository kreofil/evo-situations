// Figure.cpp - Реализация функций, осуществляющих обработку обобщенной фигуры

#include "Figure.h"

//------------------------------------------------------------------------------
// Реализации глобальных переменных, обеспечивающих подключение зарегистрировнных функций

// Счетчик зарегистрированных фигур
// Значение счетчика формируется в момент работы регистратора очередной фигуры
// Используется в необходимых случаев для определения числа зарегистрированных
// обработчиков специализаций
//int figuresCounter = 0;

// Количество специализаций, зарегистрированных для данного обобщения
// Начальное значение равно 0
//int Figure::num = 0;

namespace {
    int specNumber = 0;
}

// Функция, возвращающая индекс очередной регистрируемой специализации
// После этого количество специализаций увеличивается на 1
int GetSpecNumAndIncrement() {
    return specNumber++;
}

// Описание переменной, используемой для регистрации функций создания фигур-специализаций
CreateFigureFileMarkFunc createFigureUseFileMark[10];

// Описание переменной, используемой для регистрации функций ввода фигур-специализаций
InFigureValueFunc inFigureValue[10];

// Описание переменной, используемой для регистрации функций вывода фигур-специализаций
OutFigureFunc outFigure[10];

// Описание переменной, используемой для регистрации функций вывода фигур-специализаций
DeleteFigureFunc deleteFigure[10];

//------------------------------------------------------------------------------
//  Функции используемые для обработки обобщенной фигуры

// Создание незаполненной обобщенной фигуры по значению признака из файла
// Данный признак может не совпадать с признаком фигуры
Figure* CreateFigureUseFileMark(int fileMark) {
    Figure* pf;
    for(int i = 0; i < specNumber; i++) {
        pf = createFigureUseFileMark[i](fileMark);
        if(pf != 0) return pf;
    }
    return 0;
}

// Ввод значений полей фигуры-специализаии из потока через обобщенную функцию
// после определения маркера фигуры из файла и создания конкретной фигуры
void InFigureValue(ifstream &ifst, Figure& f) {
    InFigureValueFunc func = inFigureValue[f.mark];
    func(ifst, f);
}

// Ввод обобщенной фигуры из потока
Figure* InFigure(ifstream &ifst) {
    // Начинается с чтения признака фигуры, задаваемой в файле
    int fileMark;
    ifst >> fileMark;
    // Создается конкретная фигура по полученному признаку
    Figure* pf = CreateFigureUseFileMark(fileMark);
    if(pf == 0) return 0;
    InFigureValue(ifst, *pf);
    return pf;
}

// Вывод обобщенной фигуры в поток
void OutFigure(ofstream &ofst, Figure& f) {
    OutFigureFunc func = outFigure[f.mark];
    func(ofst, f);
}

// Удаление обобщенной фигуры
void DeleteFigure(Figure* pf) {
    DeleteFigureFunc func = deleteFigure[pf->mark];
    func(pf);
}
