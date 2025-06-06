#ifndef __pair__
#define __pair__
// pair.h - Тестовая пара, содержащая строку с именем и счетчик

#include <stdio.h>
#include "value.h"

//------------------------------------------------------------------------------
// Описание пары
typedef struct Pair {
  char *name;
  int  count;
} Pair;

// Формирование специализации
Value + <pair: Pair;>;

//------------------------------------------------------------------------------
// Функции для работы со значением

// Обобщенная функция вывода значения
void OutValue<Value.pair *pair>(FILE* file);

#endif // __pair__
