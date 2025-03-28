//------------------------------------------------------------------------------
// shape_Constr.cpp - содержит процедуру ввода параметров
// для уже созданной любой фигуры
//------------------------------------------------------------------------------

#include <iostream>
#include "shape_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Сигнатуры требуемых функций можно тоже подключить через
  // заголовочный файл. Но, для простоты, можно и так описать.
  void Init(rectangle &r, int x, int y);
  void Init(triangle &t, int a, int b, int c);

//------------------------------------------------------------------------------

  // Динамическое создание обобщенного прямоугольника
  shape *Create_shape_rectangle(int x, int y)
  {
    shape *s = new shape;
    s->k = shape::key::RECTANGLE;
    Init(s->r, x, y);
    return s;
  }

//------------------------------------------------------------------------------

  // Динамическое создание обобщенного треугольника
  shape *Create_shape_triangle(int a, int b, int c)
  {
    shape *s = new shape;
    s->k = shape::key::TRIANGLE;
    Init(s->t, a, b, c);
    return s;
  }

//------------------------------------------------------------------------------

  // Инициализация обобщенного прямоугольника
  void Init_rectangle(shape &s, int x, int y)
  {
    s.k = shape::key::RECTANGLE;
    Init(s.r, x, y);
  }

//------------------------------------------------------------------------------

  // Инициализация обобщенного треугольника
  void Init_triangle(shape &s, int a, int b, int c)
  {
    s.k = shape::key::TRIANGLE;
    Init(s.t, a, b, c);
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
