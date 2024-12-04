//------------------------------------------------------------------------------
// ���� IntClass.cpp - ���������� ������ ������, ��������� ����� �����.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"
#include "DoubleClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ��������� ������� ��������� �� ��������������.
Number* Int::Subtract(Number& num2)
{
	// ������ �������� - ����� �����.
    if(Int* pInt = dynamic_cast<Int*>(&num2))
    {
		return new Int(_value - pInt->GetValue()); 
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
void Int::StdOut()
{
	cout << "It is Int. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// �����������, �������������� ������������� �����.
Int::Int(int v): _value(v)
{}
