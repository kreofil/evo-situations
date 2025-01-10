//==============================================================================
// inout-rectangle-in.c - Обработчик прямоугольника,
// подключенного через псевдоинтерфейс inout
//==============================================================================

#include <stdio.h>
#include "inout-rectangle.h"

//------------------------------------------------------------------------------
// Ввод прямоугольника через указатель в псевдоинтерфейсе
void In<Figure.rect *x>() {
  RectangleIn(x->@);
}

//------------------------------------------------------------------------------
// Вывод прямоугольника через указатель в псевдоинтерфейсе
void Out<Figure.rect *x>() {
  RectangleOut(x->@);
}
