#ifndef __figure__
#define __figure__

//==============================================================================
// figure.h - содержит описание обобщающей геометрической фигуры,
//==============================================================================

#include "rectangle.h"
#include "triangle.h"

//------------------------------------------------------------------------------
// значения ключей для каждой из фигур
typedef enum key {COORD_RECTANGLE, COORD_TRIANGLE} key;

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
typedef struct CoordFigure {
  key k; // ключ
  // используемые альтернативы
  union { // используем простейшую реализацию
    CoordRectangle r;
    CoordTriangle t;
  };
} CoordFigure;

#endif // __figure__