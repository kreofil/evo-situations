#ifndef __NumberClass_h__
#define __NumberClass_h__

//------------------------------------------------------------------------------
// Файл NumberClass.h - объявляет абстрактный класс, определяющий
// числовую величину методы, обеспечивающий выбор варианта двойной
// диспетчеризации, интерфейсы методов двойной диспетчеризации.
// Используется в качестве базового класса.
//------------------------------------------------------------------------------

class Number
{
public:
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Запуск диспетчеризации с выбором первого полиморфного аргумента
	virtual Number* Subtract(Number& num2) = 0;

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Вычитание второго полиморфного аргумента при целочисленном первом
	virtual Number* SubtFromInt(int v1) = 0;
	// Вычитание второго полиморфного аргумента при действительном первом
	virtual Number* SubtFromDouble(double v1) = 0;

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Вывод значения числа в стандартный поток
	virtual void StdOut() = 0;
};

#endif
