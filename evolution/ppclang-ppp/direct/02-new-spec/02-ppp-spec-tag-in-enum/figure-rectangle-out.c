//==============================================================================
// figure-rectangle-out.c - Обработчик специализации, осуществляющий
// вывод прямоугольника как фигуры.
// Подставляется вместо абстрактной обобщающей функции
//==============================================================================

#include <stdio.h>
#include "figure-rectangle.h"

//------------------------------------------------------------------------------
// Прототип функции вывода прямоугольника
void RectangleOut(Rectangle *r, FILE* ifst);
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure *f>(FILE* ofst);

//------------------------------------------------------------------------------
// Вывод прямоугольника как фигуры
void FigureOut<Figure.rect *f>(FILE* ofst) {
  RectangleOut(&(f->@), ofst);
}
