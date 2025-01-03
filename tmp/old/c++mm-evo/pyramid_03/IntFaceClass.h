#ifndef __IntFaceClass_h__
#define __IntFaceClass_h__

//------------------------------------------------------------------------------
// ���� IntFaceClass.h - �����, ������������ ��������� ������ ����� � ������
// ������ � ���
//------------------------------------------------------------------------------

#include "NumberClass.h"

// ����� � ����������� ��� ����� �����. �������� ������ � ��������� 
// ����������� ��� ������������� �������. ��������� ��� ����, �����
// �� ���������� ���������� ������ ������ ����� ������ �������
// � ������������� ��������.
class IntFace: public Number
{
public:
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	// ����� ����� ��������� Number
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
	// ����� ���� ����������� ������ ������, ������������ �� ����������
	// �, �������������, ����������������.

	// ��������� ������� �������� �� �������, ��������������, ���������
	// ������������ ���������������, ������� SubtractDirect
	virtual Number* SubtFromFirstInt(int v) = 0;

    // ��������� �� ������� �������� ��������������, ���������
	// ������������ ���������������, ������� SubtractReverse
	virtual Number* SubtInt(int v) = 0;

};

#endif
