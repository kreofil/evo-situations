#ifndef __simple_triangle__
#define __simple_triangle__

//------------------------------------------------------------------------------
// simple-triangle.h - содержит описание класса треугольника
//------------------------------------------------------------------------------

#include "figure.h"

//------------------------------------------------------------------------------
// треугольник
class SimpleTriangle: public Figure {
  double a, b, c; // стороны
public:
  // переопределяем интерфейс класса
  void InData(std::ifstream &ifst);  // ввод данных из потока
  void Out(std::ofstream &ofst);     // вывод данных в стандартный поток
};

#endif // __simple_triangle__
