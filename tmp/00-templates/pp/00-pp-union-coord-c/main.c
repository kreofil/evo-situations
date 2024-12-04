//==============================================================================
// main.c - содержит главную функцию,
// обеспечивающую простое тестирование
//==============================================================================

#include <stdio.h>

#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
void ContainerInit(CoordContainer* c) ;
void ContainerClear(CoordContainer* c);

void ContainerIn(CoordContainer* c, FILE* ifst) ;
void ContainerOut(CoordContainer* c, FILE* ofst) ;

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
  if(argc !=3) {
    printf("incorrect command line!\nWaited: command infile outfile\n");
    return 1;
  }
  FILE* ifst = fopen(argv[1], "r");
  FILE* ofst = fopen(argv[2], "w");

  printf("Start\n");

  CoordContainer c;
  ContainerInit(&c);
  ContainerIn(&c, ifst);
  fclose(ifst);

  fprintf(ofst, "Filled container.\n");
  ContainerOut(&c, ofst);
  fprintf(stdout, "Filled container.\n");
  ContainerOut(&c, stdout);

  ContainerClear(&c);
  fprintf(ofst, "Empty container.\n");
  ContainerOut(&c, ofst);
  fclose(ofst);

  printf("Stop\n");
  return 0;
}