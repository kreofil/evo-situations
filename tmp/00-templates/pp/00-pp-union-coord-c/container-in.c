//==============================================================================
// container-in.c - содержит процедуру
// ввода фигур в контейнер из потока
//==============================================================================

#include <stdio.h>
#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
struct CoordFigure *FigureIn(FILE* ifdt);

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void ContainerIn(CoordContainer* c, FILE* ifst) {
  while(!feof(ifst))  {
    if((c->cont[c->len] = FigureIn(ifst)) != 0) {
      c->len++;
    }
  }
}
