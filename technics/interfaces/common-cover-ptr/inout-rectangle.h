#ifndef __inout_rectangle__
#define __inout_rectangle__

//==============================================================================
// inout-rectangle.h - связываение интерфейса с прямоугольником
//==============================================================================

#include "inout.h"
#include "rectangle.h"

//------------------------------------------------------------------------------
// Привязка прямоугольника через указатель
InOut + < rect: Rectangle*; >;

//------------------------------------------------------------------------------
// Подключение прямоугольника через интерфейс InOut

// Ввод прямоугольника через указатель в интерфейсе
void In<InOut.rect *x>();

// Вывод прямоугольника через указатель в псевдоинтерфейсе InOut
void Out<InOut.rect *x>();

#endif // __inout_rectangle__
