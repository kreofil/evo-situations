//==============================================================================
// simple-rectangle-in.c - содержит процедуру ввода параметров
// для уже созданного прямоугольника
//==============================================================================

#include <stdio.h>
#include "simple-rectangle.h"

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника из файла
void SimpleRectangleIn(SimpleRectangle *r, FILE* ifst) {
  fscanf(ifst, "%lf", &(r->x));
  fscanf(ifst, "%lf", &(r->y));
}
