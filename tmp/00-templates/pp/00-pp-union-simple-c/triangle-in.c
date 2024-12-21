//==============================================================================
// triangle-in.c - содержит процедуру ввода параметров
// для уже созданного треугольника
//==============================================================================

#include <stdio.h>
#include "triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника из потока
void TriangleIn(SimpleTriangle *t, FILE* ifst) {
  // fscanf(ifst, "%d%d%d", &(t->a), &(t->b), &(t->c));
  fscanf(ifst, "%lf", &(t->a));
  fscanf(ifst, "%lf", &(t->b));
  fscanf(ifst, "%lf", &(t->c));
}