//==============================================================================
// strategy.c - содержит функции, реализующие различные стратегии
//==============================================================================

#include <stdio.h>
#include <stdlib.h>
#include "strategy.h"

//------------------------------------------------------------------------------
// Функция запуска одной из стратегий по умолчанию
void RunStrategy<struct Strategy *s>(struct Container *container) {
  perror("Incorrect Strategy\n");
  exit(1);
}

//------------------------------------------------------------------------------
// Вывод содержимого контейнера в указанный поток
void ContainerOut(struct Container *c, FILE* ofst);

// Функция запуска одной из стратегий выводящей содержимое контейнера
void RunStrategy<struct Strategy.out *s>(struct Container *c) {
  ContainerOut(c, stdout);
}

//------------------------------------------------------------------------------
// Вывод периметров фигур, размещенных в контейнере, в указанный поток
void ContainerPerimeterOut(struct Container *c, FILE* ofst);

// Функция запуска одной из стратегий вычисляющей периметр элементов контейнера
void RunStrategy<struct Strategy.perimeter *s>(struct Container *c) {
  ContainerPerimeterOut(c, stdout);
}
