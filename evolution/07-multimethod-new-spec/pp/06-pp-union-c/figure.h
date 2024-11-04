#ifndef __figure__
#define __figure__

//==============================================================================
// figure.h - содержит описание обобщающей геометрической фигуры,
//==============================================================================

#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

//------------------------------------------------------------------------------
// значения ключей для каждой из фигур
typedef enum key {RECTANGLE, TRIANGLE, CIRCLE} key;

//------------------------------------------------------------------------------
// структура, обобщающая все имеющиеся фигуры
typedef struct Figure {
  key k; // ключ
  // используемые альтернативы
  union { // используем простейшую реализацию
    Rectangle r;
    Triangle t;
    Circle    c;
  };
} Figure;

#endif // __figure__