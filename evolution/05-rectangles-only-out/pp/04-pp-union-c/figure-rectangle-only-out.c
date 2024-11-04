//==============================================================================
// figure-rectangle-only-out.c - содержит функцию вывода параметров
// только фигуры, которая является прямоугольником
//==============================================================================

#include "figure.h"
#include <stdio.h>

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
void RectangleOut(Rectangle* r, FILE* ofst);

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
bool FigureRectangleOnlyOut(Figure* f, FILE* ofst)
{
    switch (f->k) {
    case RECTANGLE:
        RectangleOut(&(f->r), ofst);
        return true;
    }
    return false;
}
