//------------------------------------------------------------------------------
// shape_In.cpp - содержит процедуру ввода параметров
// для уже созданной любой фигуры
//------------------------------------------------------------------------------

#include <iostream>
#include "shape_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Сигнатуры требуемых функций можно тоже подключить через
  // заголовочный файл. Но, для простоты, можно и так описать.
  void In(rectangle &r);
  void In(triangle &t);

//------------------------------------------------------------------------------

  // Ввод параметров обобщенной фигуры из стандартного потока ввода
  shape* In()
  {
    shape *sp;
    cout << "Input key: for Rectangle is 1, for Triangle is 2, else break: ";
    int k;
    cin >> k;
    switch(k) {
    case 1:
      sp = new shape;
      sp->k = shape::key::RECTANGLE;
      In(sp->r);
      return sp;
    case 2:
      sp = new shape;
      sp->k = shape::key::TRIANGLE;
      In(sp->t);
      return sp;
    default:
      return 0;
    }
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
