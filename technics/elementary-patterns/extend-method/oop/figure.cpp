//------------------------------------------------------------------------------
// figure.cpp - содержит методы обобщенной фигуры
//------------------------------------------------------------------------------

#include <iostream>
#include "rectangle.h"

//------------------------------------------------------------------------------
// Информация, порождаемая родительским методом ввода
void Figure::In() {
  std::cout << "Input of the general figure\n";
}

//------------------------------------------------------------------------------
// Информация, порождаемая родительским методом вывода
void Figure::Out() {
  std::cout << "Output of the general figure\n";
}