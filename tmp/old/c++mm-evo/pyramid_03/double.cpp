//------------------------------------------------------------------------------
// Файл double.cpp - определяет методы класса,
// задающего действительное число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "int.h"
#include "double.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание из "меня" второго числа. Второе число является аргументом
Number* Double::SubtractDirect(Number& num2)
{
    // Вызывается виртуальный метод, осуществляющий
    // обработку второго аргумента.
    DoubleFace* d_num = static_cast<DoubleFace*>(&num2);
    return d_num->SubtFromFirstDouble(_value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание "меня" из первого числа. Первое число является аргументом
Number* Double::SubtractReverse(Number& num1)
{
    // Вызывается виртуальный метод, осуществляющий
    // обработку перавого аргумента.
    DoubleFace* d_num = static_cast<DoubleFace*>(&num1);
    return d_num->SubtDouble(_value);
}


//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вывод значения числа в стандартный поток
void Double::StdOut()
{
  cout << "It is Double. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Переопределение методов вышестояших пирамидальных классов

// Вычитание второго операнда из первого, целочисленного, аргумента
// Продолжатель диспетчеризации, начатой SubtractDirect
Number* Double::SubtFromFirstInt(int v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(v - _value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание из второго операнда первого, целочисленного, аргумента
// Продолжатель диспетчеризации, начатой SubtractReverse
Number* Double::SubtInt(int v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(_value - v);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Далее идут методы своего интерфейсного класса
// и, следовательно, переопределяемые.

// Вычитание второго операнда из первого, действительного, аргумента
// Продолжатель диспетчеризации, начатой SubtractDirect
Number* Double::SubtFromFirstDouble(double v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(v - _value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Вычитание из второго операнда первого, действительного, аргумента
// Продолжатель диспетчеризации, начатой SubtractReverse
Number* Double::SubtDouble(double v)
{
  // Первый аргумент передается, а второй находится внутри
  return new Double(_value - v);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
// Конструктор, обеспечивающий инициализацию числа.
Double::Double(double v): _value(v)
{_rank = 1;}
