#ifndef __FigColorDecorator__
#define FigColorDecorator__

#include "Figure.h"

#include <string>

//------------------------------------------------------------------------------
// Структура FigColorDecorator, определяющая декоратор, задающий цвет фигуры и
// указатель на следующую фигуру
struct FigColorDecorator: Figure {
    // цвет задается строкой
    string color;
    // Указатель на фигуру
    Figure* pf;
};

// Функция возвращающая значение признака для зарегистрированного декоратора
int GetRegMarkFigColorDecorator();

//------------------------------------------------------------------------------
//  Функции используемые для обработки декоратора как специализации фигуры

// Инициализация существующего декоратора
void Init(FigColorDecorator& fcd, string color, Figure* pf);

// Создание фигуры-декоратора без инициализации
FigColorDecorator* CreateFigColorDecorator();

// Создание фигуры-декоратора с инициализаций
FigColorDecorator* CreateFigColorDecoratorAndInit(string color, Figure* pf);

// Создание фигуры-декоратора как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigColorDecoratorUseFileMark(int fileMark);


// Ввод специализации фигуры-декоратора из потока
void In(ifstream &ifst, FigColorDecorator& fcd);

// Вывод специализации фигуры-декоратора в поток
void Out(ofstream &ofst, FigColorDecorator& fcd);

// Удаление специализации фигуры-декоратора
void DeleteFigColorDecorator(FigColorDecorator* pfcd);

#endif
