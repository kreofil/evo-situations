//------------------------------------------------------------------------------
// Файл DoubleClass.cpp - определяет методы класса, 
// задающего действительное число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"
#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Вычитание первого числа из второго. Первое число - сам класс
// Второе число является аргументом
Number* Double::Subtract(Number& num2)
{
    if(Int* pInt = dynamic_cast<Int*>(&num2))
	{
		// Второй аргумент - целое число. Происходит непосредственное его 
		// вычитание из первого после RTTI.
		return new Double(_value - pInt->GetValue()); 
	}
    else if(Double* pDouble = dynamic_cast<Double*>(&num2))
	{
		// Второй аргумент - целое число. Происходит непосредственное его 
		// вычитание из первого после RTTI.
		// Действительное вычитается из действитеьного
		return new Double(_value - pDouble->GetValue()); 
	}
	else
	{
		// Вызывается метод, осуществляющий обработку второго 
		// аргумента. Будет работать при наличии нескольких классов
		// Расположенных в пирамиде после Double
		// Но используется при эволюционном пирамидальном наращивании.
		return num2.SubtFrom(*this);
	}
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Вспомогательный метод, осуществляющий передачу первого аргумента 
// в объект, являющийся вторым аргументом, для выполнения вычитания.
// Может использоваться для анализа вышестоящих классов.
// К сожалению, снова приходится обращаться к RTTI, так как первый
// аргумент поступает обезличенным
Number* Double::SubtFrom(Number& num1)
{
    if(Int* pInt = dynamic_cast<Int*>(&num1))
	{
		// Второй аргумент - целое число. Происходит непосредственное его 
		// вычитание из первого после RTTI.
		// Из целого вычитается действительное
		return new Double(pInt->GetValue() - _value); 
	}
	else
	{
		return 0;
	}
	// Возможно, в реальном приложении должно порождаться исключение.
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Вывод значения числа в стандартный поток
/*
void Double::StdOut()
{
	cout << "It is Double. Value = " << _value << endl;
}
*/

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// Конструктор, обеспечивающий инициализацию числа.
Double::Double(double v): _value(v)
{}
