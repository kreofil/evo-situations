#ifndef __coord_triangle__
#define __coord_triangle__

//==============================================================================
// coord-triangle.h - описание треугольника
//==============================================================================

#include "coord-point.h"

//------------------------------------------------------------------------------
// треугольник
typedef struct CoordTriangle {
  Point a, b, c; // вершины треугольника
} CoordTriangle;

#endif // __coord_triangle__

