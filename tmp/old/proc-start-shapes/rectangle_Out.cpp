//------------------------------------------------------------------------------
// rectangle_Out.cpp - содержит процедуру
// вывода параметров прямоугольника
//------------------------------------------------------------------------------

#include <iostream>
#include "rectangle_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Вывод параметров прямоугольника
  void Out(rectangle &r)
  {
    cout << "It is Rectangle: x = " << r.x << ", y = " << r.y << endl;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace