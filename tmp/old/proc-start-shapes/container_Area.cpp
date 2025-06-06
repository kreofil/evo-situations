//------------------------------------------------------------------------------
// container_Area.cpp - содержит процедуру
// вычисления суммарной площади всех фигур, расположенных в контейнере
//------------------------------------------------------------------------------

#include "container_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Сигнатуры требуемых функций можно тоже подключить через
  // заголовочный файл. Но, для простоты, можно и так описать.
  double Area(shape &s);

//------------------------------------------------------------------------------

  // Вычисление суммарной площади для фигур, размещенных в контейнере
  double Area(container &c)
  {
    double a = 0;
    for(int i = 0; i < c.len; i++) {
      a += Area(*(c.cont[i]));
    }
    return a;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
