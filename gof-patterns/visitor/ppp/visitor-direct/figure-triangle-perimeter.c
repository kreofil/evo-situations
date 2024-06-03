//==============================================================================
// figure-triangle-perimeter.c - Обработчик специализации, осуществляющий
// вычисление периметра треугольника как фигуры.
// Подставляется вместо абстрактной обобщающей функции
//==============================================================================

#include "figure-triangle.h"

//------------------------------------------------------------------------------
// Прототип функции вычисления периметра треугольника
double TrianglePerimeter(Triangle *t);
// Прототип обобщенной функции вычисления периметра
double FigurePerimeter<Figure *f>();

//------------------------------------------------------------------------------
// Периметр прямоугольника как фигуры
void FigurePerimeter<struct Figure<struct Triangle> *f>() {
  TrianglePerimeter(&(f->@));
}
