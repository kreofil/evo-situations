//------------------------------------------------------------------------------
// figure-in.cpp - �������� ��������� ����� ����������
// ��� ��� ��������� ����� ������
//------------------------------------------------------------------------------

// #include <iostream>
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
  Any *anyFigure;
  int k;
  ifst >> k;
  switch(k) {
    case 1:
      anyFigure = new Rectangle;
      break;
    case 2:
      anyFigure = new Triangle;
      break;
    case 3:
      anyFigure = new Circle;
      break;
    default:
      return 0;
  }
  sp = new Figure;
  sp->specObject = anyFigure;
  sp->InFP(ifst);
  return sp;
}
