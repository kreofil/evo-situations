//------------------------------------------------------------------------------
// shape_In.cpp - �������� ��������� ����� ���������� 
// ��� ��� ��������� ����� ������
//------------------------------------------------------------------------------

#include "shape_atd.h"

//------------------------------------------------------------------------------
// ���������� ���������� ���������� ��� ���� ���������
// �������������� �������
#include "rectangle_atd.h"
#include "triangle_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // ���� ���������� ���������� ������ �� ������������ ������ �����
	shape* shape::In(ifstream &ifst) {
    shape *sp;
    int k;
    ifst >> k;
    switch(k) {
    case 1:
      sp = new rectangle;
	  break;
    case 2:
      sp = new triangle;
	  break;
	default:
      return 0;
    }
    sp->InData(ifst);
    return sp;
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
