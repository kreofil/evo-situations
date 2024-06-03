#ifndef __rectangle__
#define __rectangle__

//------------------------------------------------------------------------------
// rectangle.h - содержит описание абстрактного прямоугольника,
// порожденного от базового класса Figure
// Используется для создания семейства прямоугольников
//------------------------------------------------------------------------------

#include "figure.h"

//------------------------------------------------------------------------------
// прямоугольник
class Rectangle: public Figure {
public:
  // переопределяем интерфейс класса
  // virtual void InData(std::ifstream &ifst);  // ввод данных из потока
  // virtual void Out(std::ofstream &ofst);    // вывод данных в стандартный поток
  // SimpleRectangle() {} // создание без инициализации.
};

#endif // __abstract_rectangle__
