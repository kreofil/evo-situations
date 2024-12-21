//==============================================================================
// container-constr.c - содержит процедуры
// начальной инициализации и очистки (утилизации) контейнера
//==============================================================================

#include <stdlib.h>
#include "container.h"
#include "figure.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void ContainerInit(SimpleContainer *c) {
  c->len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void ContainerClear(SimpleContainer *c) {
  for(int i = 0; i < c->len; i++) {
    free(c->cont[i]);
  }
  ContainerInit(c);
}