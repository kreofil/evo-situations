//==============================================================================
// rectangle-in.c - содержит процедуру ввода параметров
// для уже созданного прямоугольника
//==============================================================================

#include <stdio.h>
#include "rectangle.h"

//------------------------------------------------------------------------------
// Ввод параметров прямоугольника из файла
void InRectangle(rectangle *r, FILE* ifst) {
  fscanf(ifst, "%d", &(r->x));
  fscanf(ifst, "%d", &(r->y));
}
