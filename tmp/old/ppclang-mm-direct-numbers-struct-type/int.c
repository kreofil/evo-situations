//------------------------------------------------------------------------------
// Файл int.c - определяет обработчики целочисленной специализации.
//------------------------------------------------------------------------------

#include <stdio.h>
#include "int.h"

//------------------------------------------------------------------------------
// Вывод значения числа в стандартный поток
void StdOut<Number.Int* num>() {
  printf("It is Int. Value = %d\n", num->@value);
}
