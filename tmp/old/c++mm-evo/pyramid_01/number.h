#ifndef __number_h__
#define __number_h__

//------------------------------------------------------------------------------
// Файл number.h - объявляет абстрактный класс, определяющий
// числовую величину и чистые методы работы с ней.
// Используется в качестве базового класса.
//------------------------------------------------------------------------------

class Number
{
public:
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Вычитание первого числа из второго. Первое число - сам класс
	// Второе число является аргументом
	virtual Number* Subtract(Number& num2) = 0;

	// Вспомогательный метод, осуществляющий передачу первого аргумента
	// в объект, являющийся вторым аргументом, для выполнения вычитания.
	virtual Number* SubtFrom(Number& num1) = 0;

	// Вывод значения числа в стандартный поток
	virtual void StdOut() = 0;
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
};

#endif
