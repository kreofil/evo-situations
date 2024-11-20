//==============================================================================
// simple-rectangle.c - содержит функции обработки простого прямоугольника
//==============================================================================

#include "simple-rectangle.h"

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника из файла
void SimpleRectangleIn(SimpleRectangle *r, FILE* ifst) {
  fscanf(ifst, "%lf", &(r->x));
  fscanf(ifst, "%lf", &(r->y));
}

//------------------------------------------------------------------------------
// Вывод параметров прямоугольника в форматируемый поток
void SimpleRectangleOut(SimpleRectangle *r, FILE* ofst) {
  fprintf(ofst,
          "It is Simple Rectangle: x = %.3lf, y = %.3lf\n",
          r->x, r->y);
}
