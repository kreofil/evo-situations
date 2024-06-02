//==============================================================================
// figures-input.c - функция содания ввода всех альтернативных фигур.
// Реализована как централизованная. Единственная, требующая модификации
// при вводе данных. Но можно тоже сделать эволюционно расширяемой.
//==============================================================================

#include <stdio.h>
#include "figure-rectangle.h"
#include "figure-triangle.h"
#include "figure-circle.h"

// void FigureIn<Figure *f>(FILE* file);
void FigureIn<struct Figure *f>(FILE* file);

//------------------------------------------------------------------------------
// Ввод параметров одной из фигур из файла
Figure* FigureCreateAndIn(FILE* ifst) {
// struct Figure* FigureCreateAndIn(FILE* ifst) {
  Figure *sp;
  // struct Figure *sp;
  int k = 0;
  fscanf(ifst, "%d", &(k));
  switch(k) {
  case 1:
    sp = create_spec<struct Figure<struct Rectangle> >();
    break;
  case 2:
    sp = create_spec<struct Figure<struct Triangle> >();
    break;
  case 3:
    sp = create_spec<struct Figure<struct Circle> >();
    break;
  default:
    return 0;
  }
  FigureIn<sp>(ifst);
  return sp;
}
