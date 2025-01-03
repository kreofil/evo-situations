//==============================================================================
// figure-out.c - реализация обобщенной функции вывода фигуры,
// переопределяемой различными обработчиками специализации.
// Реализована как абстракная функция.
//==============================================================================

#include <stdio.h>
#include "figure.h"

//------------------------------------------------------------------------------
// Обобщающая функция для вывода параметров фигуры
void FigureOut<Figure *sh>(FILE* file) {} // = 0;

// Дополнительная обертка для того, чтобы угодить библиотеке
void FigureOutLib(Figure *f, FILE* file) {
  FigureOut<f>(file);
}