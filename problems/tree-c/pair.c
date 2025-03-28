// pair.c
// Описание реализаций функций, связанных с обработкой значения

#include <stdio.h>
#include <stdlib.h>
#include "pair.h"

//==============================================================================
// Функции для работы со значением

//------------------------------------------------------------------------------
// Специализированная функция вывода значения
void OutValue<Value.pair *pair>(FILE* file) {
  fprintf(file, "---%s[%d]\n", pair->@name, pair->@count);
}
