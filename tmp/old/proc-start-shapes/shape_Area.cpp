//------------------------------------------------------------------------------
// shape_Area.cpp - содержит процедуру
// вычисления площади для обобщенной фигуры
//------------------------------------------------------------------------------

#include "shape_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Сигнатуры требуемых функций можно тоже подключить через
  // заголовочный файл. Но, для простоты, можно и так описать.
  double Area(rectangle &r);
  double Area(triangle &t);

//------------------------------------------------------------------------------

  // Нахождение площади обобщенной фигуры
  double Area(shape &s)
  {
    switch(s.k) {
    case shape::key::RECTANGLE:
      return Area(s.r);
    case shape::key::TRIANGLE:
      return Area(s.t);
    default:
      return 0.0;
    }
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
