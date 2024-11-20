//==============================================================================
// simple-triangle.c - содержит функции обработки простого треугольника
//==============================================================================

#include "simple-triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника из потока
void SimpleTriangleIn(SimpleTriangle *t, FILE* ifst) {
  // fscanf(ifst, "%d%d%d", &(t->a), &(t->b), &(t->c));
  fscanf(ifst, "%lf", &(t->a));
  fscanf(ifst, "%lf", &(t->b));
  fscanf(ifst, "%lf", &(t->c));
}

//------------------------------------------------------------------------------
// Вывод параметров треугольника в поток
void SimpleTriangleOut(SimpleTriangle *t, FILE *ofst) {
  fprintf(ofst,
          "It is Simple Triangle: a = %.3lf, b = %.3lf, c = %.3lf\n",
          t->a, t->b, t->c);
}
