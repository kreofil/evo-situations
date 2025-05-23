//------------------------------------------------------------------------------
// container-rect-only-out.cpp - содержит процедуру
// вывода из содержимого контейнера только прямоугольников
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// Вывод из содержимого контейнера только прямоугольников
void Container::RectOnlyOut(std::ofstream &ofst) {
  ofst << "Container contents " << len << " elements.\n";
  for(int i = 0; i < len; i++) {
    ofst << i << ": ";
    cont[i]->RectOnlyOut(ofst);
  }
}
