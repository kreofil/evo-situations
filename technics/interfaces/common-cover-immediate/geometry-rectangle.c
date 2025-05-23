//==============================================================================
// geometry-rectangle.c - Обработчик прямоугольника,
// подключенного через псевдоинтерфейс geometry
//==============================================================================

#include <stdio.h>
#include "geometry-rectangle.h"

//------------------------------------------------------------------------------
// Периметр прямоугольника через указатель в псевдоинтерфейсе geometry
double Perimeter<Geometry.rect *x>() {
  return RectanglePerimeter(x->@);
}

//------------------------------------------------------------------------------
// Площадь прямоугольника через указатель в псевдоинтерфейсе geometry
double Area<Geometry.rect *x>() {
  return RectangleArea(x->@);
}
