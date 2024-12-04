//------------------------------------------------------------------------------
// ‘айл DoubleClass.cpp - определ€ет методы класса, 
// задающего действительное число.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"
#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ¬ычитание второго аргумента из действительного.
Number* Double::Subtract(Number& num2)
{
	// ¬торой аргумент - целое число.
    if(Int* pInt = dynamic_cast<Int*>(&num2))
    {
		return new Double(_value - pInt->GetValue()); 
    }
    // ¬торой аргумент - действительное число.
    else if(Double* pDouble = dynamic_cast<Double*>(&num2))
    {
		return new Double(_value - pDouble->GetValue()); 
	}
	else
	{
		return 0;
	}
}

// ¬ывод значени€ числа в стандартный поток
void Double::StdOut()
{
	cout << "It is Double. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//  онструктор, обеспечивающий инициализацию числа.
Double::Double(double v): _value(v)
{}
