#ifndef __double_h__
#define __double_h__

//------------------------------------------------------------------------------
// Файл double.h - объявляет класс, определяющий целое число и методы
// работы с ним. Подключает также абстрактный класс Number.
//------------------------------------------------------------------------------

#include "double-face.h"

//------------------------------------------------------------------------------
// Класс действительных чисел. Является вторым в иерархиии пирамидальных классов.
class Double: public DoubleFace
{
public:
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Вычитание первого числа из второго. Первое число - сам класс
	// Второе число является аргументом
	Number* Subtract(Number& num2);

	// Вывод значения числа в стандартный поток
	void StdOut();

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Переопределения методов вышестоящих пирамидальных классов

    // Вычитание второго операнда из первого, целочисленного, аргумента
	Number* SubtFromFirstInt(int v);

	//- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Далее идут собственные чистые методы, перадаваемые по наследству
	// и, следовательно, переопределяемые.

	Number* SubtFromFirstDouble(double v);

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
