// Файл ContainerTestPerimeter.cpp, содержащий функцию обхода фигур с выводом их периметров

#include "Container.h"

//------------------------------------------------------------------------------
//  Функция вычисления периметра обобщенной фигуры
double Perimeter(Figure& f);

void FigurePerimeterTestOut(ofstream& ofst, Container& c) {
    for(int i = 0; i < c.size; i++) {
      ofst << i << ": ";
      double p = Perimeter(*(c.storage[i]));
      ofst << p << endl;
    }
}
