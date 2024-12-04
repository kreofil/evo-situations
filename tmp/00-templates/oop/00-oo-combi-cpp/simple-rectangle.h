#ifndef __simple_rectangle__
#define __simple_rectangle__

//------------------------------------------------------------------------------
// simple-rectangle.h - содержит описание класса прямоугольника,
// порожденного от базового класса Figure
//------------------------------------------------------------------------------

// Требуется описание класса SimpleFigure
#include "simple-figure.h"

//------------------------------------------------------------------------------
// прямоугольник
class SimpleRectangle: public SimpleFigure {
  double x, y; // ширина, высота
public:
  // переопределяем интерфейс класса
  void InData(std::ifstream &ifst);  // ввод данных из потока
  void Out(std::ofstream &ofst);    // вывод данных в стандартный поток
  SimpleRectangle() {} // создание без инициализации.
};

#endif // __simple_rectangle__