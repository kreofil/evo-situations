//==============================================================================
// figure-in.c - реализация обобщенной функции ввода фигуры,
// переопределяемой различными обработчиками специализации.
// Реализована как абстракная функция.
//==============================================================================

#include <stdio.h>
#include "figure.h"

//------------------------------------------------------------------------------
// Обобщающая функция для ввода параметров фигуры
void FigureIn<Figure *f>(FILE* file) {}//= 0;

//------------------------------------------------------------------------------
// Обобщающая функция, которая по указателю на перечислимый тип
// и значению из файла создает специализированную фигуру
Figure* FigureCreateUseTag<EnumFig *pEnumFig>(int k) {
  printf("Unnown figure type for k = %d\n", k);
  exit(13);
}
