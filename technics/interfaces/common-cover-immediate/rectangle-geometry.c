//==============================================================================
// rectangle-geometry.c - содержит функции геометрических вычисления параметров
// для уже созданного прямоугольника
//==============================================================================

#include <stdio.h>
#include "rectangle.h"

//------------------------------------------------------------------------------
// Вычисление периметра прямоугольника
double RectanglePerimeter(Rectangle *r) {
  return 2.0 * (r->x + r->y);
}

//------------------------------------------------------------------------------
// Вычисление площади прямоугольника
double RectangleArea(Rectangle *r) {
  return r->x * r->y;
}
