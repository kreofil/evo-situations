//------------------------------------------------------------------------------
// creator.c - определения обобщенного создателя и обработчиков
// специализаций, имитирующих реализацию фабричного метода
//------------------------------------------------------------------------------

#include "creator.h"

//------------------------------------------------------------------------------
// Обобщенная функция создателя является чистой
Figure* CreateFigure<Creator *f>() = 0; // {return NULL;}

//------------------------------------------------------------------------------
// Создатель прямоугольников-специализаций
Figure* CreateFigure<Creator.rect  *f>() {
  return create_spec(Figure.Rectangle);
}

//------------------------------------------------------------------------------
// Создатель треугольников-специализаций
Figure* CreateFigure<Creator.trian *f>() {
  return create_spec(Figure.Triangle);
}
