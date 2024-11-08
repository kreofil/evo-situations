//==============================================================================
// shape-out.c - содержит процедуру вывода параметров
// для произвольной геометрической фигуры
//==============================================================================

#include <stdio.h>
#include "shape.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
void OutRectangle(rectangle *r, FILE* ofst);
void OutTriangle(triangle *t, FILE *ofst);

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void OutShape(shape *s, FILE* ofst)
{
  switch(s->k) {
  case RECTANGLE:
    OutRectangle(&(s->r), ofst);
    break;
  case TRIANGLE:
    OutTriangle(&(s->t), ofst);
    break;
  default:
    fprintf(ofst, "Incorrect figure!\n");
  }
}
