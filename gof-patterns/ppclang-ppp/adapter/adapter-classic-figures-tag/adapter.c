//==============================================================================
// adapter.c - Обработчик специализации для адаптера контейнера
// реализующий интерфейс с фигурой как обобщением.
// Используется только для демонстрации адаптера.
// Но может также в принципе применяться и в композиции.
//==============================================================================

#include <stdio.h>
#include "adapter.h"

//------------------------------------------------------------------------------
// Прототип функции вывода контейнера
void ContainerOut(Container *c, FILE* ifst);
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure *f>(FILE* ofst);

//------------------------------------------------------------------------------
// Ввод контейнера через адаптер как фигуры
void FigureOut<Figure.contAdapter *f>(FILE* ofst) {
  ContainerOut(f->@container, ofst);
}
