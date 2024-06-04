//==============================================================================
// shape-out.cpp - содержит процедуру вывода параметров
// для произвольной геометрической фигуры
//==============================================================================

#include <fstream>
#include "shape.h"

//------------------------------------------------------------------------------

// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
void Out(rectangle &r, std::ofstream &ofst);
void Out(triangle  &t, std::ofstream &ofst);

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void Out(shape &s, std::ofstream &ofst)
{
  switch(s.k) {
  case shape::RECTANGLE:
    Out(s.r, ofst);
    break;
  case shape::TRIANGLE:
    Out(s.t, ofst);
    break;
  default:
    ofst << "Incorrect figure!" << "\n";
  }
}
