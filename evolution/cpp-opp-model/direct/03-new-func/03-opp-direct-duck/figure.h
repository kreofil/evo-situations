#ifndef __figure__
#define __figure__

//------------------------------------------------------------------------------
// figure.h - содержит описание обобщающей геометрической фигуры,
// являющееся базовыым классом для всех прочих фигур
//------------------------------------------------------------------------------

#include <fstream>
#include <vector>
#include "any.h"

//------------------------------------------------------------------------------
// Класс, обобщающает все имеющиеся фигуры.
// Является абстрактным, обеспечивая, тем самым, проверку интерфейса
class Figure {
public:
  Figure(); // Конструктор, так как интефейс формируется и инициализируется
  // Возможно должен быть нормальный деструктор, отвечающий за удаление
  // подключенных объектов. Но не факт. Пок игнорирую.
  //~Figure();
  // Идентификация, порождение и ввод фигуры из потока
  static  Figure* In(std::ifstream &ifst);
  // Метод ввода фигуры через параметрическую таблицу
  void InFP(std::ifstream &ifst);
  // Метод вывода фигуры через параметрическую таблицу
  void OutFP(std::ofstream &ofst);
  // Вычисление периметра фигуры через параметрическую таблицу
  double PerimeterFP();

  // Указатель на подключаемый объект, который имеет методы,
  // зарегистрированные в параметрических таблицах для заданного интерфейса
  Any* specObject;
};

// Общее описание типа обобщающих функций для интерфейса фигур
typedef void (*InDataP)(Any* f, std::ifstream &ifst);
typedef void (*OutDataP)(Any* f, std::ofstream &ofst);
typedef double (*PerimeterDataP)(Any* f);

// Счетчик числа зарегистрированных специализаций
extern int specCounter;
// Параметрическая таблица для функций ввода
extern std::vector<InDataP> InP;
// Параметрическая таблица для функций вывода
extern std::vector<OutDataP> OutP;
// Параметрическая таблица для функций вычисления периметра
extern std::vector<PerimeterDataP> PerimeterP;

#endif // __figure__