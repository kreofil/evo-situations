#ifndef __figure_creator__
#define __figure_creator__

//------------------------------------------------------------------------------
// figure-creator.h - абстрактный класс, определяющий интерфейс
// фабричного метода
//------------------------------------------------------------------------------

#include <fstream>
#include "figure.h"

//------------------------------------------------------------------------------
// Абстрактный фабричный метод
class FigureCreator {
public:
  // Создание фигуры
  virtual Figure* CreateFigure() = 0;
};

//------------------------------------------------------------------------------

#endif // __figure_creator__