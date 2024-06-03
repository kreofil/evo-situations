//------------------------------------------------------------------------------
// simple-creator.c - определения обобщенного создателя и обработчиков
// специализаций, имитирующих реализацию фабричного метода
//------------------------------------------------------------------------------

#include "simple-creator.h"

//------------------------------------------------------------------------------
// Обобщенная функция создателя является чистой
Figure* CreateFigure<Creator *f>() {} //= 0;

//------------------------------------------------------------------------------
// Создатель прямоугольников-специализаций
Figure* CreateFigure<Creator<rect>  *f>() {
  return create_spec<struct Figure<struct SimpleRectangle> >();
}

//------------------------------------------------------------------------------
// Создатель треугольников-специализаций
Figure* CreateFigure<Creator<trian> *f>() {
  return create_spec<struct Figure<struct SimpleTriangle> >();
}
