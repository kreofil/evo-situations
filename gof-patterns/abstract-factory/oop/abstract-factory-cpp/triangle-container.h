#ifndef __triangle_container__
#define __triangle_container__

//------------------------------------------------------------------------------
// triangle-container.h - содержит класс,
// представляющий простейший контейнер для треугольников
//------------------------------------------------------------------------------

#include "triangle.h"

//------------------------------------------------------------------------------
// Простейший контейнер треугольников на основе одномерного массива
//------------------------------------------------------------------------------

  class TriangleContainer
  {
    enum {max_len = 100}; // максимальная длина
    int len; // текущая длина
    Triangle *cont[max_len];
  public:
    // Занесение треугольника в котнейнер
    void In(Triangle* triangle);
    void Out(std::ofstream &ofst);    // вывод фигур в выходного потока
    void Clear();  // очистка контейнера от фигур
    TriangleContainer();    // инициализация контейнера
    ~TriangleContainer() {Clear();} // утилизация контейнера перед уничтожением
  };

#endif // __triangle_container__