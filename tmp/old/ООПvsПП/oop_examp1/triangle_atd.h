#ifndef __triangle_atd__
#define __triangle_atd__

//------------------------------------------------------------------------------
// triangle_atd.h - �������� �������� ������ ������������,
// ������������ �� �������� ������ shape
//------------------------------------------------------------------------------

// �������� �������� ������ shape
#include "shape_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

//------------------------------------------------------------------------------

  // �����������
  class triangle: public shape  
  {
    int a, b, c; // �������
  public:
    // �������������� ��������� ������
    void In();     // ���� ������ �� ������������ ������
    void Out();    // ����� ������ � ����������� �����
    double Area(); // ���������� ������� ������
    triangle(int _a, int _b, int _c); // �������� � ��������������
    triangle() {} // �������� ��� �������������.
  };

//------------------------------------------------------------------------------

} // end simple_shapes namespace

#endif

