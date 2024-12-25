//==============================================================================
// rectangle-perimeter.cpp - содержит метод
// вывода параметров прямоугольника
//==============================================================================

#include <stdio.h>
#include "rectangle.h"

//------------------------------------------------------------------------------
// Вычисление периметра прямоугольника
double Rectangle::PerimeterRP(Figure* f) {
  Rectangle* r = reinterpret_cast<Rectangle*>(f);
  return (double)(2*(r->x + r->y));
}
