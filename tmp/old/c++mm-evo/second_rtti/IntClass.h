#ifndef __IntClass_h__
#define __IntClass_h__

//------------------------------------------------------------------------------
// ���� IntClass.h - ��������� �����, ������������ ����� ����� � ������
// ������ � ���
//------------------------------------------------------------------------------

#include "NumberClass.h"

// ����� ����� �����. 
class Int: public Number
{
public:
	//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	// ��������� ������� ��������� �� ��������������.
	Number* Subtract(Number& num2);

    // ����� �������� ����� � ����������� �����
    void StdOut();
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

    // �����������, �������������� ������������� �����.
    Int(int v);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    // ��������� �������� �����
    int GetValue()  {return _value;}

private:
  // �������� ������ �����
  int _value;
};

#endif
