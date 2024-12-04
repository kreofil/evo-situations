//==============================================================================
// main.c - содержит главную функцию,
// обеспечивающую простое тестирование
//==============================================================================

#include <stdio.h>
#include "word32-spec.h"

//------------------------------------------------------------------------------
int main(int argc, char* argv[]) {
  printf("Start\n");

  struct w32.i32 iopd1;
  struct w32.i32 iopd2;
  struct w32.i32 ires;

  iopd1.@val32 = 10;
  iopd2.@val32 = 20;

  Add<&iopd1, &iopd2>(&ires);
  printf("result = %d\n", (int)ires.@val32);

  iopd2.@val32 = -40;
  Add<&ires, &iopd2>(&ires);
  printf("result = %d\n", (int)ires.@val32);

  iopd1 = iopd2;
  printf("iopd1 = %d\n", (int)iopd1.@val32);

  Add<&ires, &iopd1>(&ires);
  printf("result = %d\n", (int)ires.@val32);

  struct w32.u32 uopd1;
  struct w32.u32 uopd2;
  struct w32.u32 ures;

  uopd1.@val32 = 100;
  uopd2.@val32 = 200;

  Add<&uopd1, &uopd2>(&ures);
  printf("unsigned result = %u\n", (unsigned int)ures.@val32);

  Add<&iopd1, &uopd2>(&ures);
  printf("unsigned result = %u\n", (unsigned int)ures.@val32);

  printf("Finish\n");
  return 0;
}
