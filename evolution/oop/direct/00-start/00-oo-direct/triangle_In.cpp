//------------------------------------------------------------------------------
// triangle_In.cpp - �������� ��������� ����� ���������� 
// ��� ��� ���������� ������������
//------------------------------------------------------------------------------

#include "triangle_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // ���� ���������� ������������
  void triangle::InData(ifstream &ifst) {
    ifst >> a >> b >> c;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
