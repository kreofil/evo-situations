//==============================================================================
// simple-container-in.c - содержит процедуру
// ввода фигур в контейнер из потока
//==============================================================================

#include <stdio.h>
#include "simple-container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
struct SimpleFigure *SimpleFigureIn(FILE* ifdt);

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void SimpleContainerIn(SimpleContainer* c, FILE* ifst) {
  while(!feof(ifst))  {
    if((c->cont[c->len] = SimpleFigureIn(ifst)) != 0) {
      c->len++;
    }
  }
}
