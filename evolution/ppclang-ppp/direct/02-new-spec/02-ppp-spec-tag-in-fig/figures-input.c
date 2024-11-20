//==============================================================================
// figures-input.c - функция содания ввода всех альтернативных фигур.
// Реализована как централизованная. Единственная, требующая модификации
// при вводе данных. Но можно тоже сделать эволюционно расширяемой.
//==============================================================================

#include <stdio.h>
#include <stdlib.h>
#include "figure.h"
// #include "figure-rectangle.h"
// #include "figure-triangle.h"
// #include "figure-circle.h"

void FigureIn<Figure *f>(FILE* file);
Figure* FigureCreateUseTag<Figure *pFig>(int k);

//------------------------------------------------------------------------------
// Ввод параметров одной из фигур из файла
Figure* FigureCreateAndIn(FILE* ifst) {
  // printf("figSpecSize = %d\n", get_spec_size(Figure));
  Figure *sp;
  int k = 0;
  fscanf(ifst, "%d", &(k));
  // printf("k = %d\n", k);
  for(int i = 1; i <= get_spec_size(Figure); i++) {
    Figure* pFig = get_spec_ptr(Figure, i);
    sp = FigureCreateUseTag<pFig>(k);
    if(sp != NULL) break;
  }
  if(sp == NULL) {
    printf("Incorrect pointer to input figure\n");
    exit(13);
  }
  FigureIn<sp>(ifst);
  return sp;
}

