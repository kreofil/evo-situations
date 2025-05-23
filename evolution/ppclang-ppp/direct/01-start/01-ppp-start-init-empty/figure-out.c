//==============================================================================
// figure-out.c - реализация обобщенной функции вывода фигуры,
// переопределяемой различными обработчиками специализации.
// Реализована как абстракная функция.
//==============================================================================

#include <stdio.h>
#include "figure.h"

//------------------------------------------------------------------------------
// Обобщающая функция для вывода параметров фигуры
void FigureOut<Figure *f>(FILE* file) {
  printf("Incorrect function call for FigureOut\n");
} //= 0;

// Обработчик специализации для фиктивной заглушки
void FigureOut<Figure.empty *f>(FILE* file) {
  printf("Incorrect function call for Empty Figure Out\n");
}
