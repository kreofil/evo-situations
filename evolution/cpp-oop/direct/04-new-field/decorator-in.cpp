//------------------------------------------------------------------------------
// decorator-in.cpp - содержит процедуру ввода параметров
// для уже созданного декоратора
//------------------------------------------------------------------------------

#include "decorator.h"

//------------------------------------------------------------------------------
// Ввод параметров декоратора
void Decorator::InData(std::ifstream &ifst) {
  fig->InData(ifst); // Ввод параметров подключенной фигуры
  ifst >> std::hex >> color;     // Ввод цвета фигуры
}
