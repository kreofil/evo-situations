//------------------------------------------------------------------------------
// Файл IntClass.cpp - определяет методы класса, задающего целое число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вывод значения числа в стандартный поток
void Int::StdOut()
{
	cout << "It is Int. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Конструктор, обеспечивающий инициализацию числа.
Int::Int(int v): _value(v)
{}
