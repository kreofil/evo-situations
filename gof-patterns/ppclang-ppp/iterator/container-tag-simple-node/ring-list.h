// list.h
// ���������� �������� �  ������� �������, ��������� � ���������� ������������
// ����������������� ���������� ������

#include <stdio.h>
#include "value.h"

//------------------------------------------------------------------------------
// ������������� ���������� ���� ������,
// ����������� �� ���������� �������������
typedef struct Node {
  Value* value;
  struct Node* next;
} Node;

//------------------------------------------------------------------------------
// ���������, ������������ ���������������� ��������� ������
typedef struct RingList {
  Node* tail;
  Node* previous;
  Node* current;
} RingList;

//==============================================================================
// ������� ��� ������ �� �������

// ��������� ������������� ������
void InitRingList(RingList* list);

// ���������� �������� � ����� ������
void AppendRingList(RingList* list, Value* value);

// �������� �������� �� ������ ������ � ��� �����������
Value* DeleteHeadOfRingList(RingList* list);

// ����� ��������� ������ � ��������� ����, �������
// ������ ���� ������������� ������
void OutRingListValues(FILE* file, RingList* list);

// �������� ���� ��������� ������ (������� �� ������)
void EmptyRingList(RingList* list);

// ����� �������� ���������� ��������, �� ������� ����
void OutCurrentRingListValue(FILE* file, Value* value);

