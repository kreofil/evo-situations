//------------------------------------------------------------------------------
// ���� IntClass.cpp - ���������� ������ ������, ��������� ����� �����.
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "IntClass.h"

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// ��������� ������� ����� �� �������. ������ ����� - ��� �����
// ������ ����� �������� ����������
//Number* Int::Subtract(Number* num2)
Number* Int::Subtract(Number& num2)
{
  // ��� ������ ������������� ��������� ��� ������� ����� �� �����
  // ������������ ���������� ������� ��������� � ������������� ��������.
  //return static_cast<IntFace*>(num2)->SubtFromFirstInt(_value);
  IntFace* i_num = static_cast<IntFace*>(&num2);
  return i_num->SubtFromFirstInt(_value);
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
Number* Int::SubtFromFirstInt(int v)
{
  // ������ �������� ����������, � ������ ��������� ������
  return new Int(v - _value);
}

//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
// �����������, �������������� ������������� �����.
Int::Int(int v): _value(v)
{}