//==============================================================================
// coord-container-constr.c - содержит процедуры
// начальной инициализации и очистки (утилизации) контейнера
//==============================================================================

#include <stdlib.h>
#include "coord-container.h"
#include "coord-figure.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void CoordContainerInit(CoordContainer *c) {
  c->len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void CoordContainerClear(CoordContainer *c) {
  for(int i = 0; i < c->len; i++) {
    free(c->cont[i]);
  }
  CoordContainerInit(c);
}
