//==============================================================================
// inout-rectangle-in.c - Обработчик прямоугольника,
// подключенного через псевдоинтерфейс inout
//==============================================================================

#include <stdio.h>
#include "inout-rectangle.h"

//------------------------------------------------------------------------------
// Ввод прямоугольника через указатель в псевдоинтерфейсе InOut
void In<InOut.rect *x>() {
  RectangleIn(x->@);
}

//------------------------------------------------------------------------------
// Вывод прямоугольника через указатель в псевдоинтерфейсе InOut
void Out<InOut.rect *x>() {
  RectangleOut(x->@);
}
