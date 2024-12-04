//------------------------------------------------------------------------------
// triangle_Area.cpp - содержит процедуру
// вычисления площади треугольника по трем сторонам
//------------------------------------------------------------------------------

#include <math.h>
#include "triangle_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Вычисление площади треугольника
  double Area(triangle &t)
  {
    double p = (t.a + t.b + t.c) / 2.0; // полупериметр
    return sqrt(p * (p-t.a) * (p-t.b) * (p-t.c));
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
