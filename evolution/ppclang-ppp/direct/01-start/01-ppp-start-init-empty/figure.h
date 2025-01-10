#ifndef __figure__
#define __figure__

//==============================================================================
// figure.h - содержит описание обобщающей геометрической фигуры,
//==============================================================================

// #include "rectangle.h"
// #include "triangle.h"

//------------------------------------------------------------------------------
// структура, обобщающая фигуры
typedef struct Figure {} <> Figure;

// Основа специализации для формирования фиктивной заглушки
typedef struct Empty{} Empty;
// Специализация для формирования фиктивной заглушки
// Figure + <empty: Empty*;>;
Figure + <empty: void*;>;
// Figure + <empty: int*;>;

#endif // __figure__