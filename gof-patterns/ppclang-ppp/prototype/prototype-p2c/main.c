//==============================================================================
// main.c - содержит главную функцию,
// обеспечивающую простое тестирование
//==============================================================================

#include <stdio.h>
#include "simple-figure.h"

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
  if(argc !=3) {
    printf("incorrect command line!\nWaited: command infile outfile\n");
    return 1;
  }
  FILE* ifst = fopen(argv[1], "r");
  FILE* ofst = fopen(argv[2], "w");

  printf("Start\n");

  struct SimpleFigure.FigureContainer container;
  FigureContainerInit(&(container.@));

  FigureIn<&container>(ifst);
  fclose(ifst);

  fprintf(stdout, "Filled Parent container.\n");
  FigureOut<&container>(stdout);

  fprintf(ofst, "Filled Parent container.\n");
  FigureOut<&container>(ofst);

  //========

  struct SimpleFigure.FigureContainer *pc;
  pc = FigureClone<&container>();

  fprintf(stdout, "Filled Cloned container.\n");
  FigureOut<&container>(stdout);

  fprintf(ofst, "Filled Cloned container.\n");
  FigureOut<&container>(ofst);

  FigureContainerClear(&(container.@));
  fprintf(ofst, "Empty Parent container.\n");
  FigureOut<&container>(ofst);

  FigureContainerClear(&(pc->@));
  fprintf(ofst, "Empty Cloned container.\n");
  FigureOut<&container>(ofst);

  fclose(ofst);
  free(pc);

  printf("Stop\n");
  return 0;
}