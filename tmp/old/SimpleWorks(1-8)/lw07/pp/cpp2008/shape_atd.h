#ifndef __shape_atd__
#define __shape_atd__

//------------------------------------------------------------------------------
// shape.h - �������� �������� ���������� �������������� ������,
//------------------------------------------------------------------------------

#include "rectangle_atd.h"
#include "triangle_atd.h"

//------------------------------------------------------------------------------

namespace simple_shapes {

  // ���������, ���������� ��� ��������� ������
  struct shape {
    // �������� ������ ��� ������ �� �����
    enum key {RECTANGLE, TRIANGLE};
    key k; // ����
    // ������������ ������������
    union { // ���������� ���������� ����������
      rectangle r;
      triangle t;
    };
  };

//------------------------------------------------------------------------------

} // end simple_shapes namespace

#endif