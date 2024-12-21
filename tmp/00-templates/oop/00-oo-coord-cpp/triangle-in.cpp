//------------------------------------------------------------------------------
// triangle_In.cpp - содержит процедуру ввода параметров
// для уже созданного треугольника
//------------------------------------------------------------------------------

#include <iostream>
#include "triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника
void CoordTriangle::InData(std::ifstream &ifst) {
  a.In(ifst);
  b.In(ifst);
  c.In(ifst);
}