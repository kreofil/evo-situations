//==============================================================================
// triangle-peimeter.cpp - содержит метод для вычисления периметра треугольника
//==============================================================================

#include <stdio.h>
#include "triangle.h"

//------------------------------------------------------------------------------
// Вычисление периметра треугольника
double Triangle::Perimeter() {
  return (double)(a + b + c);
}

