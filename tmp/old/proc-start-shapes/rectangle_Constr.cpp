//------------------------------------------------------------------------------
// rectangle_Constr.cpp - содержит процедуры
// создания, инициализации и удаления прямоугольника
//------------------------------------------------------------------------------

#include "rectangle_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Динамическое создание прямоугольника по двум сторонам
  rectangle *Create_rectangle(int x, int y)
  {
    rectangle *r = new rectangle;
    r->x = x;
    r->y = y;
    return r;
  }

//------------------------------------------------------------------------------

  // Инициализация уже созданного прямоугольника по двум сторонам
  void Init(rectangle &r, int x, int y)
  {
    r.x = x;
    r.y = y;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
