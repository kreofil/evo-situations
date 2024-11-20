//==============================================================================
// container-out.c - содержит процедуру
// вывода содержимого контейнера
//==============================================================================

#include <stdio.h>
#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
// void FigureOut<Figure* s>(FILE* ofst);
void FigureOut<struct Figure* f>(FILE* ofst);

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void ContainerOut(Container *c, FILE* ofst) {
  fprintf(ofst, "Container contains %d elements.\n", c->len);
  for(int i = 0; i < c->len; i++) {
    fprintf(ofst, "%d: " , i);
    FigureOut<c->cont[i]>(ofst);
  }
}
