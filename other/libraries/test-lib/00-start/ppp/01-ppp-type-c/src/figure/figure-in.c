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

// Дополнительная обертка для того, чтобы угодить библиотеке
void FigureInLib(Figure *f, FILE* file) {
  FigureIn<f>(file);
}