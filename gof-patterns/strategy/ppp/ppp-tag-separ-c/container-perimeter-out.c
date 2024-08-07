//==============================================================================
// container-perimeter-out.c - содержит функцию, осуществляющую
// вычислени и тестовый вывод периметров для фигур в контейнере
//==============================================================================

#include <stdio.h>
#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
double FigurePerimeter<Figure* f>();

//------------------------------------------------------------------------------
// Вывод периметров фигур, размещенных в контейнере, в указанный поток
void ContainerPerimeterOut(Container *c, FILE* ofst) {
  fprintf(ofst, "Perimeters of figures:\n");
  for(int i = 0; i < c->len; i++) {
    fprintf(ofst, "%d: %f\n" , i, FigurePerimeter<c->cont[i]>());
  }
}
