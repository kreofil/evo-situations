//==============================================================================
// figure-circle-perimeter.c - Обработчик специализации, осуществляющий
// вычисление периметра круга как фигуры.
// Подставляется вместо абстрактной обобщающей функции
//==============================================================================

#include "figure-circle.h"

//------------------------------------------------------------------------------
// Прототип функции вычисления периметра круга
double CirclePerimeter(Circle *r);
// Прототип обобщенной функции вычисления периметра
double FigurePerimeter<Figure *f>();

//------------------------------------------------------------------------------
// Периметр круга как фигуры
void FigurePerimeter<Figure.circ *f>() {
  CirclePerimeter(&(f->@));
}