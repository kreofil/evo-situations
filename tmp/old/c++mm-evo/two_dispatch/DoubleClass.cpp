//------------------------------------------------------------------------------
// Файл DoubleClass.cpp - определяет методы класса, 
// задающего действительное число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Выполнение диспетчеризации при первом действительном аргументе
Number* Double::Subtract(Number& num2)
{
  return num2.SubtFromDouble(_value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Вычитание второго действительного операнда из первого целого
// Продолжатель диспетчеризации, начатой Subtract
Number* Double::SubtFromInt(int v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(v - _value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Вычитание второго действительного операнда из первого действительного
// Продолжатель диспетчеризации, начатой Subtract
Number* Double::SubtFromDouble(double v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(v - _value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Вывод значения числа в стандартный поток
void Double::StdOut()
{
  cout << "It is Double. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Конструктор, обеспечивающий инициализацию числа.
Double::Double(double v): _value(v)
{}
