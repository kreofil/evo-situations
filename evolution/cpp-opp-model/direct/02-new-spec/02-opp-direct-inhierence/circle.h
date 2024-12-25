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
  Circle();

  // Функция ввода содержимого круга,
  // подключаемая через параметрическую таблицу
  static void InTP(Figure* f, std::ifstream &ifst);
  // Функция вывода содержимого круга,
  // подключаемая через параметрическую таблицу
  static void OutTP(Figure* f, std::ofstream &ofst);

  // Признак фигуры
  static int tag;
};

#endif // __circle__

