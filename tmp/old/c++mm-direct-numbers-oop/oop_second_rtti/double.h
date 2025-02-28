#ifndef __DoubleClass_h__
#define __DoubleClass_h__

//------------------------------------------------------------------------------
// Файл DoubleClass.h - объявляет класс, определяющий целое число и методы
// работы с ним. Подключает также абстрактный класс Number.
//------------------------------------------------------------------------------

#include "number.h"

//------------------------------------------------------------------------------
// Класс действительных чисел.
class Double: public Number
{
public:
	//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Вычитание второго аргумента из действительного.
	Number* Subtract(Number& num2);

    // Вывод значения числа в стандартный поток
    void StdOut();
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    // Конструктор, обеспечивающий инициализацию числа.
    Double(double v);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
    // Получение значения числа
    double GetValue() {return _value;}

private:
  // Значение действительного числа
  double _value;
};

#endif
