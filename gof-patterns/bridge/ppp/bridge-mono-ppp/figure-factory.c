//------------------------------------------------------------------------------
// figure-factory.c - Реализация обобщенных функций и обработчиков
// специализаций, создающих различные геометрические фигуры посредством
// использования фабрик.
//------------------------------------------------------------------------------

#include <stdio.h>
#include <stdlib.h>
#include "figure-factory.h"

static void test_type_tag_Figure(struct Figure* X) {
  printf("Figure Tag = %d\n", X->__pp_specialization_type);
}

static void test_type_tag_SimpleFigure(struct SimpleFigure* X) {
  printf("SimpleFigure Tag = %d\n", X->__pp_specialization_type);
}

//------------------------------------------------------------------------------
// Обобщенная функция создания фигуры - прямоугольника
Figure* CreateRectangle<FigureFactory *factory>() {
  return NULL;
} //= 0;

//------------------------------------------------------------------------------
// Обработчик специализации, создающий простой прямоугольник
Figure* CreateRectangle<FigureFactory.simple *factory>() {
  // struct SimpleFigure.rect *psr = create_spec(SimpleFigure.rect);
  // struct Figure.simple *pf = create_spec(Figure.simple);
  // pf->@ = (SimpleFigure*)psr;
  // return (Figure*)pf;
  printf("CreateRectangle.simple start\n");
  struct Figure.simple.rect *pf = create_spec(Figure.simple.rect);
  if(pf == 0) {
    perror("Incorrect Pointer!!!!\n");
    exit(66);
  }
  // test_type_tag_SimpleFigure(psr);
  test_type_tag_SimpleFigure(&(pf->@));
  test_type_tag_Figure(pf);
  // pf->@ = *psr;
  printf("CreateRectangle.simple finish\n");
  return (Figure*)pf;
  // return create_spec(Figure.simple.rect);
}

//------------------------------------------------------------------------------
// Обработчик специализации, прямоугольник, заданный координатами
Figure* CreateRectangle<FigureFactory.coord *factory>() {
  struct CoordFigure.rect *psr = create_spec(CoordFigure.rect);
  // struct Figure.coord *pf = create_spec(Figure.coord);
  // pf->@ = (CoordFigure*)psr;
  // return (Figure*)pf;
  return create_spec(Figure.coord.rect);
}

//------------------------------------------------------------------------------
// Обобщенная функция создания фигуры - треугольника
Figure* CreateTriangle<FigureFactory *factory>() {
  return NULL;
} //= 0;

//------------------------------------------------------------------------------
// Обработчик специализации, создающий создающий простой треугольник
Figure* CreateTriangle<FigureFactory.simple *factory>() {
  // struct SimpleFigure.trian *psr = create_spec(SimpleFigure.trian);
  // struct Figure.simple *pf = create_spec(Figure.simple);
  // pf->@ = (SimpleFigure*)psr;
  // return (Figure*)pf;
  struct Figure.simple.trian *pf = create_spec(Figure.simple.trian);
  // test_type_tag_SimpleFigure(psr);
  test_type_tag_SimpleFigure(&(pf->@));
  test_type_tag_Figure(pf);
  return (Figure*)pf;
  // return create_spec(Figure.simple.trian);
}

//------------------------------------------------------------------------------
// Обработчик специализации, создающий треугольник, заданный координатами
Figure* CreateTriangle<FigureFactory.coord *factory>() {
  // struct CoordFigure.trian *psr = create_spec(CoordFigure.trian);
  struct Figure.coord *pf = create_spec(Figure.coord);
  // pf->@ = (CoordFigure*)psr;
  // return (Figure*)pf;
  return create_spec(Figure.coord.trian);
}
