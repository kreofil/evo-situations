//==============================================================================
// main.c - содержит главную функцию,
// обеспечивающую простое тестирование
//==============================================================================

#include <stdio.h>

#include "inout-rectangle.h"
#include "inout-triangle.h"
#include "geometry-rectangle.h"
#include "geometry-triangle.h"
#include "cover.h"

//------------------------------------------------------------------------------
// Создание и ввод параметров одной из фигур
InOut* InOutCreate();

RectangleCover ext_rc = {.r.x = 15, .r.y = 10};


//------------------------------------------------------------------------------
int main() {

  RectangleCover rc = {.r.x = 5, .r.y = 10};
  RectangleLink(&rc);
  Out<(InOut*)&(rc.io)>();
  printf("Perimeter = %lf\n", Perimeter<(Geometry*)&(rc.g)>());
  printf("Area = %lf\n", Area<(Geometry*)&(rc.g)>());

  // Как я понимаю, внешняя память пока не катит?
  RectangleLink(&ext_rc);
  // init_spec(InOut.rect, &(ext_rc.io));
  // init_spec(Geometry.rect, &(ext_rc.g));
  Out<(InOut*)&(ext_rc.io)>();
  printf("Perimeter = %lf\n", Perimeter<(Geometry*)&(ext_rc.g)>());
  printf("Area = %lf\n", Area<(Geometry*)&(ext_rc.g)>());

  // Как я понимаю, динамическая память пока не катит?
  RectangleCover *prc = NewRectangleCover();
  // init_spec(InOut.rect, &(prc->io));
  // init_spec(Geometry.rect, &(prc->g));
  prc->r.x = 13;
  prc->r.y = 20;
  Out<(InOut*)&(prc->io)>();
  printf("Perimeter = %lf\n", Perimeter<(Geometry*)&(prc->g)>());
  printf("Area = %lf\n", Area<(Geometry*)&(prc->g)>());
  DeleteRectangleCover(prc);

  return 0;
}
