//------------------------------------------------------------------------------
// circle_Out.cpp - �������� ���������
// ������ ���������� �����
//------------------------------------------------------------------------------

#include "circle_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // ����� ���������� �����
  void circle::Out(ofstream &ofst) {
    ofst << "It is Circle: r = " << r << endl;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
