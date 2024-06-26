#ifndef __container__
#define __container__

//------------------------------------------------------------------------------
// container.h - содержит класс,
// представляющий простейший контейнер обобщенных фигур любого семейства
//------------------------------------------------------------------------------

#include "figure.h"

class FigureFactory;

//------------------------------------------------------------------------------
// Простейший контейнер фигур на основе одномерного массива
class Container
{
  enum {max_len = 100}; // максимальная длина
  int len; // текущая длина
  Figure *cont[max_len];
public:
  // ввод фигур в котнейнер из входного потока
  void In(std::ifstream &ifst, FigureFactory* factory);
  // ввод фигур в котнейнер из входного потока
  void Out(std::ofstream &ofst);    // вывод фигур в выходного потока
  void Clear();  // очистка контейнера от фигур
  Container();    // инициализация контейнера
  ~Container() {Clear();} // утилизация контейнера перед уничтожением
};

#endif // __container__
