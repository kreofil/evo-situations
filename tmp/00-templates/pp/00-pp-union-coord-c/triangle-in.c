//==============================================================================
// triangle-in.c - содержит процедуру ввода параметров
// для уже созданного треугольника
//==============================================================================

#include <stdio.h>
#include "triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника из потока
void TriangleIn(CoordTriangle *t, FILE* ifst) {
  // fscanf(ifst, "%d%d%d", &(t->a), &(t->b), &(t->c));
  fscanf(ifst, "%lf", &(t->a.x));
  fscanf(ifst, "%lf", &(t->a.y));
  fscanf(ifst, "%lf", &(t->b.x));
  fscanf(ifst, "%lf", &(t->b.y));
  fscanf(ifst, "%lf", &(t->c.x));
  fscanf(ifst, "%lf", &(t->c.y));
}
