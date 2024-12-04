//------------------------------------------------------------------------------
// Файл DoubleClass.cpp - определяет методы класса,
// задающего действительное число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"
#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание второго аргумента из действительного.
Number* Double::Subtract(Number& num2)
{
	// Второй аргумент - целое число.
  if(Int* pInt = dynamic_cast<Int*>(&num2)) {
		return new Double(_value - pInt->GetValue());
	}
	// Второй аргумент - действительное число.
  else if(Double* pDouble = dynamic_cast<Double*>(&num2)) {
		return new Double(_value - pDouble->GetValue());
	}	else {
		return 0;
	}
}

// Вывод значения числа в стандартный поток
void Double::StdOut() {
	cout << "It is Double. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Конструктор, обеспечивающий инициализацию числа.
Double::Double(double v): _value(v)
{}
