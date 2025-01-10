#ifndef __inout__
#define __inout__

//==============================================================================
// inout.h - содержит описание структуры псевдоинтерфейса ввода-вывода
//==============================================================================
#include "figure.h"

//------------------------------------------------------------------------------
// Описание функций интерфейса ввода-вывода для фигуры

// Обобщающая функция для ввода через интерфейс InOut
void In<Figure *x>();

// Обобщающая функция для вывода через интерфейс InOut
void Out<Figure *x>();

#endif // __inout__