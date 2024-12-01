//==============================================================================
// figure-triangle-in.c - Обработчик специализированного прямоугольника-фигуры.
//==============================================================================

#include <stdio.h>
#include "figure-triangle.h"

//------------------------------------------------------------------------------
// Ввод треугольника-фигуры
void In<Figure.trian *f>() {
  // Запуск обработчика обобщенной фигуры
  InGeneralFigure((Figure*)f);
  TriangleIn(&(f->@));
}

//------------------------------------------------------------------------------
// Вывод треугольника-фигуры
void Out<Figure.trian *f>() {
  // Запуск обработчика обобщенной фигуры
  OutGeneralFigure((Figure*)f);
  TriangleOut(&(f->@));
}
