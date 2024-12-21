#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - �������� �������� ���������� �������������� ������,
//------------------------------------------------------------------------------

#include "rectangle.h"
#include "triangle.h"

//------------------------------------------------------------------------------

namespace figures {

  // ���������, ���������� ��� ��������� ������
  struct figure {
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

#endif // figure