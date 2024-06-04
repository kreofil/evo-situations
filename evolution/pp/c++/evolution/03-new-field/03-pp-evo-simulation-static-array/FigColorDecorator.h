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

// Задается признак декоратора
const int colorDecoratorMark = 2;

//------------------------------------------------------------------------------
//  Функции используемые для обработки круга как специализации фигуры

// Инициализация существующего декоратора
void Init(FigColorDecorator& fcd, string color, Figure* pf);

// Создание фигуры-декоратора без инициализации
FigColorDecorator* CreateFigColorDecorator();

// Создание фигуры-декоратора с инициализаций
FigColorDecorator* CreateFigColorDecoratorAndInit(string color, Figure* pf);

// Создание фигуры-декоратора как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigColorDecoratorUseFileMark(int fileMark);


//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод специализации фигуры-декоратора из потока
void In(ifstream &ifst, FigColorDecorator& fcd);

// Вывод специализации фигуры-декоратора в поток
void Out(ofstream &ofst, FigColorDecorator& fcd);

// Функции - оболочки, используемые для параметризации данной специализации

// Ввод специализации фигуры-декоратора из потока как фигуры
void InFigColorDecoratorValue(ifstream &ifst, Figure& f);

// Вывод специализации фигуры-декоратора в поток как фигуры
void OutFigColorDecorator(ofstream &ofst, Figure& f);

#endif
