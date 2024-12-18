#ifndef __NumberClass_h__
#define __NumberClass_h__

//------------------------------------------------------------------------------
// Файл NumberClass.h - объявляет абстрактный класс, определяющий
// числовую величину и чистые методы работы с ней.
// Используется в качестве базового класса.
//------------------------------------------------------------------------------

class Number {
public:
  // Вычитание второго аргумента из данного.
  // Переопределяется в производных классах.
  virtual Number* Subtract(Number& num2) = 0;
  // Вывод значения числа в стандартный поток
  virtual void StdOut() = 0;
};

#endif
