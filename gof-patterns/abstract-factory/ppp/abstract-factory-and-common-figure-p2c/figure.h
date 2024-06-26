#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - содержит описание обобщающей геометрической фигуры,
// объединяющей воедино фигуры семейств.
// Не является частью Абстрактной фабрики. Поэтому реализуется через указатели
// На семейства разных обобщенных фигур, чтобы использоваться только в
// контейнере, обобщающем использование разных семейств.
//------------------------------------------------------------------------------

#include "rectangle.h"
#include "triangle.h"

//------------------------------------------------------------------------------
// Фигура
typedef struct Figure {} <rect: *struct Rectangle; trian: *struct Triangle;> Figure;

#endif // __figure__