//==============================================================================
// figure-circle-in.c - Обработчики специализации, осуществляющий
// ввод круга как фигуры.
// Подставляется вместо абстрактной обобщающей функции
//==============================================================================

#include <stdio.h>
#include "figure-circle.h"

//------------------------------------------------------------------------------
// Прототип функции ввода круга
void CircleIn(Circle *c, FILE* ifst);
// Прототип обобщеннай функции вывода фигуры
void FigureIn<Figure *f>(FILE* ifst);
// Прототип обобщенной функции создания фигуры клонированием
Figure* FigureCreateUseTag<Figure *pFig>(int k);

//------------------------------------------------------------------------------
// Ввод круга как фигуры
void FigureIn<Figure.circ *f>(FILE* ifst) {
  Circle* c = &(f->@);
  CircleIn(c, ifst);
}

//------------------------------------------------------------------------------
// Создание прямоугольника как фигуры клонированием
Figure* FigureCreateUseTag<EnumFig.circ *pEnumFig>(int k) {
  if(k == 3) {
    // printf("k = %d: It is Circle\n", k);
    return create_spec(Figure.circ);
  } else {
    return NULL;
  }
}
