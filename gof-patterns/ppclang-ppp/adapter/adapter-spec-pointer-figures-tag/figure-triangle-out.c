//==============================================================================
// figure-triangle-out.c - Обработчик специализации, осуществляющий
// вывод треугольника как фигуры.
// Подставляется вместо абстрактной обобщающей функции
//==============================================================================

#include <stdio.h>
#include "figure-triangle.h"

//------------------------------------------------------------------------------
// Прототип функции вывода треугольника
void TriangleOut(Triangle *t, FILE* ofst);
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure *f>(FILE* ofst);

//------------------------------------------------------------------------------
// Ввод треугольника как фигуры
void FigureOut<Figure.trian *f>(FILE* ofst) {
  TriangleOut(&(f->@), ofst);
}
