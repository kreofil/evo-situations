//==============================================================================
// inout.c - реализация обобщенных функций для работы
// через псевдоинтерфейс ввода-вывода
//==============================================================================

#include <stdio.h>
#include "inout.h"

//------------------------------------------------------------------------------
// Обобщающая функция для ввода фигуры
void In<Figure *x>() { // =0;
  printf("Input for this type don't released\n");
} //= 0;

//------------------------------------------------------------------------------
// Обобщающая функция для вывода фигуры
void Out<Figure *x>() {
  printf("Output for this type don't released\n");
} //= 0;
