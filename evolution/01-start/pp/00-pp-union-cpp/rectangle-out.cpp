//==============================================================================
// rectangle-out.cpp - содержит процедуру
// вывода параметров прямоугольника
//==============================================================================

#include <fstream>
#include "rectangle.h"

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника в форматируемый поток
void Out(rectangle &r, std::ofstream &ofst) {
  ofst << "It is Rectangle: x = " << r.x << ", y = " << r.y << "\n";
}
