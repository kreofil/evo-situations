#ifndef __triangle__
#define __triangle__

//------------------------------------------------------------------------------
// triangle.h - содержит описание класса треугольника,
// порожденного от базового класса Figure
//------------------------------------------------------------------------------

// Требуется описание класса Figure как используемого в реализации интерфейса
#include "figure.h"

//------------------------------------------------------------------------------
// треугольник
class Triangle: public Any {
  int a, b, c; // стороны
public:
  Triangle();  // конструктор, регистрирующий обработчики специализаций

  // Функция ввода содержимого треугольника,
  // подключаемая через параметрическую таблицу
  static void InTP(Any* f, std::ifstream &ifst);
  // Функция вывода содержимого треугольника,
  // подключаемая через параметрическую таблицу
  static void OutTP(Any* f, std::ofstream &ofst);

  // Признак фигуры
  static int tag;
};

#endif // __triangle__

