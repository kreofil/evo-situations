#ifndef __circle__
#define __circle__

//------------------------------------------------------------------------------
// circle.h - содержит описание класса круга,
// порожденного от базового класса Figure
//------------------------------------------------------------------------------

// Требуется описание класса Figure
#include "figure.h"

//------------------------------------------------------------------------------
// круг
class Circle: public Figure {
  int r; // радиус
public:
  // переопределяем интерфейс класса
  void InData(std::ifstream &ifst);  // ввод данных из потока
  void Out(std::ofstream &ofst);     // вывод данных в стандартный поток
  Circle(): r{0} {} // создание без инициализации.
};

#endif // __circle__
