//------------------------------------------------------------------------------
// Файл minus.cpp - задает функцию.вычитания
//------------------------------------------------------------------------------

#include "number.h"

// Функция вычитания, использующая множественный полиморфизм.
Number* operator- (Number& n1, Number& n2)
{
	return n1.Subtract(n2);
}


