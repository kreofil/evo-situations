//------------------------------------------------------------------------------
// shape_Out.cpp - �������� ��������� ������ ���������� 
// ��� ����� �������������� ������
//------------------------------------------------------------------------------

#include <iostream>
#include "shape_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // ��������� ��������� ������� ����� ���� ���������� �����
  // ������������ ����. ��, ��� ��������, ����� � ��� �������.
  void Out(rectangle &r);
  void Out(triangle &t);

//------------------------------------------------------------------------------

  // ����� ���������� ������� ������ � ����������� ����� ������
  void Out(shape &s)
  {
    switch(s.k) {
    case shape::key::RECTANGLE:
      Out(s.r);
      break;
    case shape::key::TRIANGLE:
      Out(s.t);
      break;
    default:
      cout << "Incorrect figure!" << endl;
    }
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
