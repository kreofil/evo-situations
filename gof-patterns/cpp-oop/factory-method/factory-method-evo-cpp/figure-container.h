#ifndef __figure_container__
#define __figure_container__

//------------------------------------------------------------------------------
// figure-container.h - содержит класс,
// представляющий простейший контейнер для фигур
//------------------------------------------------------------------------------

#include "figure.h"
#include "figure-creator.h"

//------------------------------------------------------------------------------
// Простейший контейнер на основе одномерного массива
class FigureContainer
{
  enum {max_len = 100}; // максимальная длина
  int len; // текущая длина
  Figure *cont[max_len];
public:
  // Занесение фигуры в котнейнер
  void Append(Figure* figure);
  void In(std::ifstream &ifst);     // ввод фигур в котнейнер из входного потока
  void Out(std::ofstream &ofst);    // вывод фигур в выходного потока
  void Clear();  // очистка контейнера от фигур
  FigureContainer();    // инициализация контейнера
  ~FigureContainer() {Clear();} // утилизация контейнера перед уничтожением
};

#endif // __figure_container__