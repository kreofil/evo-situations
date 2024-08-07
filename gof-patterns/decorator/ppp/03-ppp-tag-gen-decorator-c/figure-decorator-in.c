//==============================================================================
// figure-decorator-in.c - Обработчик специализации, осуществляющий
// ввод содержимого фигуры, подключенной к декоратору и декоратора (цвета).
//==============================================================================

#include <stdio.h>
#include "figure-decorator.h"

//------------------------------------------------------------------------------
// Прототип функции ввода декоратора
void RectangleIn(Decorator* r, FILE* ifst);
// Прототип обобщеннай функции ввода фигуры
void FigureIn<Figure * f>(FILE* file);

//------------------------------------------------------------------------------
// Ввод фигуры совместно с содержимым декоратора
void FigureIn<Figure.decor * d>(FILE* ifst)
{
    // В начале вводятся параметры подключенной фигуры
    // FigureIn<&(d->@.@)>(ifst);
    struct Decorator.Figure* dfp = &d->@;
    FigureIn<&(dfp->@)>(ifst);
    // Затем вводится содержимое декоратора (цвет)
    fscanf(ifst, "%x", &(d->@color));
}
