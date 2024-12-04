//------------------------------------------------------------------------------
// Файл IntClass.cpp - определяет методы класса, задающего целое число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"
#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Выполнение диспетчеризации при первом целочисленном аргументе
Number* Int::Subtract(Number& num2)
{
  return num2.SubtFromInt(_value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание второго целочисленного операнда из первого целого
// Продолжатель диспетчеризации, начатой Subtract
Number* Int::SubtFromInt(int v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Int(v - _value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание второго целочисленного операнда из первого действительного
// Продолжатель диспетчеризации, начатой Subtract
Number* Int::SubtFromDouble(double v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(v - _value);
}

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
