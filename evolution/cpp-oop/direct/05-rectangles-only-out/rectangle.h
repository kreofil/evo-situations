#ifndef __rectangle__
#define __rectangle__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание класса прямоугольника,
// порожденного от базового класса Figure
//------------------------------------------------------------------------------

// Требуется описание класса Figure
#include "figure.h"

//------------------------------------------------------------------------------
// прямоугольник
class Rectangle: public Figure {
  int x, y; // ширина, высота
public:
  // переопределяем интерфейс класса
  virtual void InData(std::ifstream &ifst);  // ввод данных из потока
  virtual void Out(std::ofstream &ofst);    // вывод данных в стандартный поток
  // Вывод только прямоугольника
  virtual void RectOnlyOut(std::ofstream &ofst);
  Rectangle(): x{0}, y{0} {} // создание без инициализации.
};

#endif // __rectangle__