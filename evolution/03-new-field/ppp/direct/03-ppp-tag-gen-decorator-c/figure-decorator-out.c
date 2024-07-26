//==============================================================================
// figure-decorator-out.c - Обработчик специализации, осуществляющий
// вывод содержимого фигуры, подключенной к декоратору и декоратора (цвета).
//==============================================================================

#include <stdio.h>
#include "figure-decorator.h"

//------------------------------------------------------------------------------
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure * f>(FILE* ofst);

//------------------------------------------------------------------------------
// Ввод фигуры совместно с содержимым декоратора
void FigureOut<Figure.decor * d>(FILE* ofst)
{
    // В начале выводится содержимое фигуры
    // FigureOut<&(d->@.@)>(ofst);
    struct Decorator.Figure* dfp = &d->@;
    FigureOut<&(dfp->@)>(ofst);
    // Затем содержимое декоратора
    fprintf(ofst, "    Color is %#0.6X\n", d->@color);
}
