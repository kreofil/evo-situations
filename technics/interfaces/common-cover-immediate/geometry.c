//==============================================================================
// geometry.c - реализация обобщенных функций для работы
// через псевдоинтерфейс geometry
//==============================================================================

#include <stdio.h>
#include "geometry.h"

//------------------------------------------------------------------------------
// Обобщающая функция для ввода через интерфейс geometry
double Perimeter<Geometry *x>() { // =0;
  printf("Perimeter for this type don't released\n");
  return 0.0;
} //= 0;

//------------------------------------------------------------------------------
// Обобщающая функция для вывода через интерфейс geometry
double Area<Geometry *x>() {
  printf("Area for this type don't released\n");
  return 0.0;
} //= 0;
