//------------------------------------------------------------------------------
// simple-rectangle-in.cpp - содержит процедуру ввода параметров
// для уже созданного прямоугольника
//------------------------------------------------------------------------------

// #include <iostream>
#include "simple-rectangle.h"

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника
void SimpleRectangle::InData(std::ifstream &ifst) {
  ifst >> x >> y;
  // std::cout << "    " << x << ", " << y << "\n";
}
