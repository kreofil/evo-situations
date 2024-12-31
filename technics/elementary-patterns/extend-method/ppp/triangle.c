//==============================================================================
// triangle-inout.c - содержит функцию ввода параметров
// для уже созданного треугольника
//==============================================================================

#include <stdio.h>
#include "triangle.h"

//------------------------------------------------------------------------------
// Ввод параметров треугольника
void TriangleIn(Triangle *t) {
  printf("a = ");
  scanf("%d", &(t->a));
  printf("b = ");
  scanf("%d", &(t->b));
  printf("c = ");
  scanf("%d", &(t->c));
}

//------------------------------------------------------------------------------
// Вывод параметров треугольника
void TriangleOut(Triangle *t) {
  printf("It is Triangle: a = %d, b = %d, c = %d\n", t->a, t->b, t->c);
}