#ifndef __rectangle__
#define __rectangle__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание класса прямоугольника,
// порожденного от базового класса Figure
//------------------------------------------------------------------------------

#include "figure.h"
#include "point.h"

//------------------------------------------------------------------------------
// прямоугольник
class CoordRectangle: public CoordFigure {
  Point top_left, down_right; // координаты верхнего и нижнего углов
public:
  // переопределяем интерфейс класса
  void InData(std::ifstream &ifst);  // ввод данных из потока
  void Out(std::ofstream &ofst);    // вывод данных в стандартный поток
  CoordRectangle() {} // создание без инициализации.
};

#endif // __rectangle__