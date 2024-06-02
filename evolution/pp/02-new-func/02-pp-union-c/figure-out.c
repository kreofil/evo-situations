//==============================================================================
// figure-out.c - содержит процедуру вывода параметров
// для произвольной геометрической фигуры
//==============================================================================

#include <stdio.h>
#include "figure.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
void RectangleOut(Rectangle *r, FILE* ofst);
void TriangleOut(Triangle *t, FILE *ofst);

//------------------------------------------------------------------------------
// Вывод параметров текущей фигуры в поток
void FigureOut(Figure *s, FILE* ofst)
{
  switch(s->k) {
  case RECTANGLE:
    RectangleOut(&(s->r), ofst);
    break;
  case TRIANGLE:
    TriangleOut(&(s->t), ofst);
    break;
  default:
    fprintf(ofst, "Incorrect figure!\n");
  }
}
