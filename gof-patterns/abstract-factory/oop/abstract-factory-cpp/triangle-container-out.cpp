//------------------------------------------------------------------------------
// triangle-container-out.cpp - содержит процедуру
// вывода содержимого контейнера
//------------------------------------------------------------------------------

#include "triangle-container.h"

//------------------------------------------------------------------------------
// Вывод содержимого контейнера
void TriangleContainer::Out(std::ofstream &ofst) {
  ofst << "Container contents " << len << " triangles.\n";
  for(int i = 0; i < len; i++) {
    ofst << i << ": ";
    cont[i]->Out(ofst);
  }
}
