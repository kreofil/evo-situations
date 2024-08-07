//==============================================================================
// figure-triangle-in.c - Обработчик специализации, осуществляющий
// ввод треугольника как фигуры.
// Подставляется вместо абстрактной обобщающей функции
//==============================================================================

#include <stdio.h>
#include "figure-triangle.h"

//------------------------------------------------------------------------------
// Прототип функции ввода треугольника
void TriangleIn(Triangle *t, FILE* ifst);
// Прототип обобщеннай функции ввода фигуры
// void FigureIn<Figure *f>(FILE* file);
void FigureIn<struct Figure *f>(FILE* file);

//------------------------------------------------------------------------------
// Ввод треугольника как фигуры
// void FigureIn<Figure<Triangle> *f>(FILE* ifst) {
void FigureIn<Figure.Triangle *f>(FILE* ifst) {
  TriangleIn(&(f->@), ifst);
}
