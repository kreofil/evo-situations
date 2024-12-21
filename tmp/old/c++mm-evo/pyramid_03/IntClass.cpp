//------------------------------------------------------------------------------
// ���� IntClass.cpp - ���������� ������ ������, ��������� ����� �����.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ��������� �� "����" ������� �����. ������ ����� �������� ����������
Number* Int::SubtractDirect(Number& num2)
{
  // ��� ������ ������������� ��������� ��� ������� ����� �� �����
  // ������������ ���������� ������� ��������� � ������������� ��������.
  IntFace* i_num = static_cast<IntFace*>(&num2);
  return i_num->SubtFromFirstInt(_value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ��������� "����" �� ������� �����. ������ ����� �������� ����������
Number* Int::SubtractReverse(Number& num1)
{
  IntFace* i_num = static_cast<IntFace*>(&num1);
  return i_num->SubtInt(_value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ����� �������� ����� � ����������� �����
void Int::StdOut()
{
  cout << "It is Int. Value = " << _value << endl;
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ����� ���� ������ ������ ������������� ������
// �, �������������, ����������������.

// ��������� ������� �������� �� �������, ��������������, ���������
// ������������ ���������������, ������� SubtractDirect
Number* Int::SubtFromFirstInt(int v)
{
  // ������ �������� ����������, � ������ ��������� ������
  return new Int(v - _value);
}

// ��������� �� ������� �������� ��������������, ���������
// ������������ ���������������, ������� SubtractReverse
// ����������. ������ ����� ����������!!!!
Number* Int::SubtInt(int v)
{
  // ������ �������� ����������, � ������ ��������� ������
  return new Int(_value - v);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// �����������, �������������� ������������� �����.
Int::Int(int v): _value(v)
{_rank = 0;}