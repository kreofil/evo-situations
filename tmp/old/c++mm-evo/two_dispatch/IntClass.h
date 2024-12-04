#ifndef __IntClass_h__
#define __IntClass_h__

//------------------------------------------------------------------------------
// Файл IntClass.h - объявляет класс, определяющий целое число и методы
// работы с ним
//------------------------------------------------------------------------------

#include "NumberClass.h"

// Класс целых чисел.
class Int: public Number
{
public:
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    // Запуск диспетчеризации с выбором первого полиморфного аргумента
    Number* Subtract(Number& num2);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    // Вычитание второго полиморфного аргумента при целочисленном первом
    Number* SubtFromInt(int v1);
    // Вычитание второго полиморфного аргумента при действительном первом
    Number* SubtFromDouble(double v1);

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    // Вывод значения числа в стандартный поток
    void StdOut();

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - - 
    // Конструктор, обеспечивающий инициализацию числа.
    Int(int v);

private:
    // Значение целого числа
    int _value;
};

#endif
