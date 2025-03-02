//==============================================================================
// figure-decorator-out.c - Обработчик специализации, осуществляющий
// вывод содержимого фигуры, подключенной к декоратору и декоратора (цвета).
//==============================================================================

#include "figure-decorator.h"
#include <stdio.h>

//------------------------------------------------------------------------------
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure * f>(FILE* ofst);

//------------------------------------------------------------------------------
// Вывод фигуры совместно с содержимым декоратора
void FigureOut<Figure.Decorator * d>(FILE* ofst)
{
    // В начале выводится содержимое фигуры
    FigureOut<d->@f>(ofst);
    // Затем содержимое декоратора
    fprintf(ofst, "    Color is %#0.6X\n", d->@color);
}
