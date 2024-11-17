//==============================================================================
// container-constr.cpp - содержит процедуры
// начальной инициализации и очистки (утилизации) контейнера
//==============================================================================

#include "container.h"
#include "shape.h"

//------------------------------------------------------------------------------
// Инициализация контейнера
void Init(container &c)
{
  c.len = 0;
}

//------------------------------------------------------------------------------
// Очистка контейнера от элементов (освобождение памяти)
void Clear(container &c)
{
  for(int i = 0; i < c.len; i++)
  {
    delete c.cont[i];
  }
  Init(c);
}