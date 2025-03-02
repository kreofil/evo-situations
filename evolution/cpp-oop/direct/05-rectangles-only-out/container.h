#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - �������� �����,
// �������������� ���������� ���������
//------------------------------------------------------------------------------

#include "figure.h"

//------------------------------------------------------------------------------
// ���������� ��������� �� ������ ����������� �������
//------------------------------------------------------------------------------

class Container {
  enum {max_len = 100}; // ������������ �����
  int len; // ������� �����
  Figure *cont[max_len];
public:
  void In(std::ifstream &ifst);     // ���� ����� � ��������� �� �������� ������
  void Out(std::ofstream &ofst);    // ����� ����� � ��������� ������
  // ����� �� ����������� ���������� ������ ���������������
  void RectOnlyOut(std::ofstream &ofst);
  void Clear();  // ������� ���������� �� �����
  Container();    // ������������� ����������
  ~Container() {Clear();} // ���������� ���������� ����� ������������
};

#endif // __container__