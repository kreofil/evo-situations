//------------------------------------------------------------------------------
// rectangle-container-in.cpp - содержит метод
// занесения прямоугольника в контейнер
//------------------------------------------------------------------------------

#include "rectangle-container.h"

//------------------------------------------------------------------------------
// Ввод содержимого контейнера
void RectangleContainer::In(Rectangle* rectangle) {
  if(len < max_len) {
    cont[len++] = rectangle;
  }
}
