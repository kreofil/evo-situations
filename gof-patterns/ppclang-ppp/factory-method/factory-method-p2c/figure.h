#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - содержит описание обобщающей геометрической фигуры,
// объединяющей фигуры семейств.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "rectangle.h"
#include "triangle.h"

//------------------------------------------------------------------------------
// Фигура
typedef struct Figure {} <Rectangle; Triangle;> Figure;

//------------------------------------------------------------------------------
// Прототип обобщеннай функции ввода фигуры
void FigureIn<Figure *f>(FILE* file);

// Обобщенная функция вывода фигуры
void FigureOut<Figure *f>(FILE* ofst);

#endif // __figure__