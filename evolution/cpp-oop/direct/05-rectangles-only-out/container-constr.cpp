//------------------------------------------------------------------------------
// container-constr.cpp - �������� �����������
// � ��������� ������� ����������
//------------------------------------------------------------------------------

#include "container.h"

//------------------------------------------------------------------------------
// ������������� ����������
Container::Container(): len{0} { }

//------------------------------------------------------------------------------
// ������� ���������� �� ��������� (������������ ������)
void Container::Clear() {
  for(int i = 0; i < len; i++) {
    delete cont[i];
  }
  len = 0;
}
