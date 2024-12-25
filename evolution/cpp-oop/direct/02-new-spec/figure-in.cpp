//------------------------------------------------------------------------------
// figure-in.cpp - �������� ��������� ����� ����������
// ��� ��� ��������� ����� ������
//------------------------------------------------------------------------------

#include "figure.h"

//------------------------------------------------------------------------------
// ���������� ���������� ���������� ��� ���� ���������
// �������������� �������
#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

//------------------------------------------------------------------------------
// ���� ���������� ���������� ������ �� ������������ ������ �����
Figure* Figure::In(std::ifstream &ifst) {
  Figure *sp;
  int k;
  ifst >> k;
  switch(k) {
    case 1:
      sp = new Rectangle;
      break;
    case 2:
      sp = new Triangle;
      break;
    case 3:
      sp = new Circle;
      break;
    default:
      return 0;
  }
  sp->InData(ifst);
  return sp;
}
