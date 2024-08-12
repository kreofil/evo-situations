#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - содержит описание обобщающей геометрической фигуры,
// объединяющей воедино фигуры различных семейств.
//------------------------------------------------------------------------------

#include "simple-figure.h"
#include "coord-figure.h"

//------------------------------------------------------------------------------
// Фигура
typedef struct Figure {}<> Figure;
Figure + <simple: SimpleFigure*;>;
Figure + <coord: CoordFigure*;>;

#endif // __figure__