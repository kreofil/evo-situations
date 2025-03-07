//==============================================================================
// coord-triangle-out.c - содержит процедуру
// вывода параметров треугольника
//==============================================================================

#include <stdio.h>
#include "coord-triangle.h"

//------------------------------------------------------------------------------
// Вывод параметров треугольника в поток
void CoordTriangleOut(CoordTriangle *t, FILE *ofst) {
  fprintf(ofst,
          "It is CoordTriangle: a = (%.3lf, %.3lf), "
          "b = (%.3lf, %.3lf), c = (%.3lf, %.3lf)\n",
          t->a.x, t->a.y, t->b.x, t->b.y, t->c.x, t->c.y);
}

