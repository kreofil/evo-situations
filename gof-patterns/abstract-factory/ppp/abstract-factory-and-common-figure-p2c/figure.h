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
// typedef struct Figure {} <rect: Rectangle*; trian: Triangle*;> Figure;
typedef struct Figure {} < : > Figure;
// Figure + <rect: Rectangle*; trian: Triangle*;>;
Figure + <rect: Rectangle*;>;
Figure + <trian: Triangle*;>;

#endif // __figure__