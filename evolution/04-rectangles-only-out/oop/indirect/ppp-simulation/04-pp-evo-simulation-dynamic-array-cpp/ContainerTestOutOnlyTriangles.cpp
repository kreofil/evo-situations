// Файл ContainerTestOutOnlyTriangles.cpp, содержащий функцию обхода фигур 
// с выводом только треугольников-специализаций

#include "Container.h"

//------------------------------------------------------------------------------
//  Функция вывода только специализированного треугольника при ссылке на фигуру
void OnlyFigTriangleOut(ofstream& ofst, Figure& f);

void OnlyFigTriangleTestOut(ofstream& ofst, Container& c) {
    for(int i = 0; i < c.size; i++) {
      Figure* pf = c.storage[i];
      OnlyFigTriangleOut(ofst, *pf);
    }
}
