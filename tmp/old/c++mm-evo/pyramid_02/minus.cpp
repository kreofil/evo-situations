//------------------------------------------------------------------------------
// ���� minus.cpp - ������ �������.���������
//------------------------------------------------------------------------------

#include "NumberClass.h"

// ������� ���������, ������������ ������������� �����������.
Number* operator- (Number& n1, Number& n2)
{
	return n1.Subtract(n2);
}


