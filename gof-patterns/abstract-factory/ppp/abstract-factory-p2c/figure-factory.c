//------------------------------------------------------------------------------
// figure-factory.c - Реализация обобщенных функций и обработчиков
// специализаций, создающих различные геометрические фигуры посредством
// использования фабрик.
//------------------------------------------------------------------------------

#include <unistd.h>
#include "figure-factory.h"

//------------------------------------------------------------------------------
// Обобщенная функция создания прямоугольника
// Не имеет реализации
Rectangle* CreateRectangle<FigureFactory *factory>() {return NULL;} //= 0;

//------------------------------------------------------------------------------
// Обработчик специализации, создающий простой прямоугольник
Rectangle* CreateRectangle<FigureFactory<simple> *factory>() {
  return create_spec(struct Rectangle<struct SimpleRectangle>);
}

//------------------------------------------------------------------------------
// Обработчик специализации, создающий прямоугольник, заданный координатами
Rectangle* CreateRectangle<FigureFactory<coord> *factory>() {
  return create_spec(struct Rectangle<struct CoordRectangle>);
}

//------------------------------------------------------------------------------
// Обобщенная функция создания треугольника
Triangle* CreateTriangle<FigureFactory *factory>() {return NULL;} //= 0;

//------------------------------------------------------------------------------
// Обработчик специализации, создающий простой треугольник
Triangle* CreateTriangle<FigureFactory<simple> *factory>() {
  return create_spec(struct Triangle<struct SimpleTriangle>);
}

//------------------------------------------------------------------------------
// Обработчик специализации, создающий треугольник, заданный координатами
Triangle* CreateTriangle<FigureFactory<coord> *factory>() {
  return create_spec(struct Triangle<struct CoordTriangle>);
}
