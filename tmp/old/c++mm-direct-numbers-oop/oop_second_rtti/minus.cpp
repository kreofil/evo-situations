//------------------------------------------------------------------------------
// Файл minus.cpp - задает функцию.вычитания
//------------------------------------------------------------------------------

#include "IntClass.h"
#include "DoubleClass.h"

// Функция вычитания, использующая только RTTI.
Number* operator- (Number& n1, Number& n2)
{
	return n1.Subtract(n2);
}


