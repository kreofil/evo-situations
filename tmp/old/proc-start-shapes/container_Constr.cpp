//------------------------------------------------------------------------------
// container_Init.cpp - содержит процедуру
// начальной инициализации контейнера
//------------------------------------------------------------------------------

#include "container_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

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
    c.len = 0;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
