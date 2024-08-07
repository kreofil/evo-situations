//==============================================================================
// container-in.c - содержит процедуру
// ввода фигур в контейнер из потока
//==============================================================================

#include <stdio.h>
#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
struct Figure *FigureCreateAndIn(FILE* ifst);

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void ContainerIn(Container* c, FILE* ifst) {
  while(!feof(ifst))  {
    if((c->cont[c->len] = FigureCreateAndIn(ifst)) != 0) {
      c->len++;
    }
  }
}

//------------------------------------------------------------------------------
// Добавление в контейнер указанной фигуры
void ContainerAppend(Container* c, struct Figure * figure) {
  if(c->len < max_len) {
    c->cont[c->len++] = figure;
  }
}
