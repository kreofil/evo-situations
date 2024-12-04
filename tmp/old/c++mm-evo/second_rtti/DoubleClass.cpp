//------------------------------------------------------------------------------
// ���� DoubleClass.cpp - ���������� ������ ������, 
// ��������� �������������� �����.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"
#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ��������� ������� ��������� �� ���������������.
Number* Double::Subtract(Number& num2)
{
	// ������ �������� - ����� �����.
    if(Int* pInt = dynamic_cast<Int*>(&num2))
    {
		return new Double(_value - pInt->GetValue()); 
    }
    // ������ �������� - �������������� �����.
    else if(Double* pDouble = dynamic_cast<Double*>(&num2))
    {
		return new Double(_value - pDouble->GetValue()); 
	}
	else
	{
		return 0;
	}
}

// ����� �������� ����� � ����������� �����
void Double::StdOut()
{
	cout << "It is Double. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// �����������, �������������� ������������� �����.
Double::Double(double v): _value(v)
{}
