#ifndef __context__
#define __context__

#include <stdbool.h>
#include "command.h"

//==============================================================================
// context.h - Описание контекста автомата, обеспечивающего обмен необходимыми
// данными между состояниями и внешней средой.
//==============================================================================

//------------------------------------------------------------------------------
//  Привдварительное описание используемых внешних структур
struct Container;   // Контейнер, используемый для хранения фигур
struct Figure;      // Обобщенная фигура

//------------------------------------------------------------------------------
// Различные состояния задаются расширяемыми перечислениями
// вместо использования классов
typedef struct Context {
  // struct Command* command;   // Текущее состояние автомата
  struct Container* container; // Связь с контейнером для хранения фигур
  struct Figure* figure; // Последняя введенная фигура
  int a, b, c;           // Переменные, используемые для формирования фигур
  bool stop;              // Признак завершения работы в последнем состоянии
} Context;

//------------------------------------------------------------------------------
// Начальная инициализация контекста.
//  устанавливаются поля, которые не меняются в начале работы
void InitContext(Context* context);

//------------------------------------------------------------------------------
// Функция установки связи с контейнером внутри контекста
void SetContainer(Context* context, struct Container* container );

#endif // __context__

