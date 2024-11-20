//------------------------------------------------------------------------------
// triangle-container-in.cpp - содержит метод
// занесения треугольника в контейнер
//------------------------------------------------------------------------------

#include "triangle-container.h"

//------------------------------------------------------------------------------
// Ввод содержимого контейнера
void TriangleContainer::In(Triangle* triangle) {
  if(len < max_len) {
    cont[len++] = triangle;
  }
}
