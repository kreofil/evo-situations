#ifndef __FigRectangle__
#define __FigRectangle__

#include "Figure.h"
#include "Rectangle.h"

//------------------------------------------------------------------------------
// Структура FigRectangle, определяющая содержимое прямоугольника как специализации фигуры
struct FigRectangle: Figure {
    Rectangle r;
};

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigRectangle();

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

// Ввод специализации фигуры-прямоугольника из потока
void In(ifstream &ifst, FigRectangle& fr);

// Вывод специализации фигуры-прямоугольника в поток
void Out(ofstream &ofst, FigRectangle& fr);

// Удаление специализации фигуры-прямоугольника
void DeleteFigRectangle(FigRectangle* pft);

#endif
