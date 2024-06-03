#ifndef __FigRectangle__
#define __FigRectangle__

#include "Figure.h"
#include "Rectangle.h"

//------------------------------------------------------------------------------
// Структура FigRectangle, определяющая содержимое прямоугольника как специализации фигуры
struct FigRectangle: Figure {
    Rectangle r;
};

// Задается признак фигуры-прямоугольника
const int rectangleMark = 1;

//------------------------------------------------------------------------------
//  Функции используемые для обработки прямоугольника как специализации фигуры

// Инициализация существующей фигуры-прямоугольника
void Init(FigRectangle& fr, int x, int y);

// Создание фигуры-прямоугольника без инициализации сторон
FigRectangle* CreateFigRectangle();

// Создание фигуры-прямоугольника с инициализаций сторон
FigRectangle* CreateFigRectangleAndInit(int x, int y);

// Создание фигуры-прямоугольника как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigRectangleUseFileMark(int fileMark);

//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод специализации фигуры-прямоугольника из потока
void In(ifstream &ifst, FigRectangle& fr);

// Вывод специализации фигуры-прямоугольника в поток
void Out(ofstream &ofst, FigRectangle& fr);

// Функции - оболочки, используемые для параметризации данной специализации

// Ввод специализации фигуры-прямоугольника из потока как фигуры
void InFigRectangleValue(ifstream &ifst, Figure& f);

// Вывод специализации фигуры-прямоугольника в поток как фигуры
void OutFigRectangle(ofstream &ofst, Figure& f);

#endif
