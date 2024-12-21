//------------------------------------------------------------------------------
// rectangle_Out.cpp - содержит процедуру
// вывода параметров прямоугольника
//------------------------------------------------------------------------------

#include "rectangle.h"

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника
void CoordRectangle::Out(std::ofstream &ofst) {
  ofst << "It is Coord Rectangle: top left = ";
  top_left.Out(ofst);
  ofst << ", down right = ";
  down_right.Out(ofst);
  ofst << "\n";
}