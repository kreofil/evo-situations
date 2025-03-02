//==============================================================================
// container-constr.c - содержит процедуры
// начальной инициализации и очистки (утилизации) контейнера
//==============================================================================

#include <stdlib.h>
#include "container.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void ContainerInit(Container *c) {
  c->len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void ContainerClear(Container *c) {
  ContainerInit(c);
}
