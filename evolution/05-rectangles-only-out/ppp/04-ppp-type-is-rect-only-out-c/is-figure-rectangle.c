//==============================================================================
// is-figure-rectangle.c - описания обобщенной функции и обработчика
// специлизации, проверяющих на то что фигура является прямоугольником
//==============================================================================

#include "figure-rectangle.h"

//------------------------------------------------------------------------------
// Обобщенная функция определяющая, является ли фигура прямоугольником
_Bool isFigureRectangle<Figure * f>() {
  return 0;
}

//------------------------------------------------------------------------------
// Обобщенная функция определяющая, является ли фигура прямоугольником
_Bool isFigureRectangle<Figure.Rectangle * f>() {
  return 1;
}
