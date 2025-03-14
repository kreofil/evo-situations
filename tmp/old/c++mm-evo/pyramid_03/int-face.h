#ifndef __int_face__
#define __int_face__

//------------------------------------------------------------------------------
// Файл int-face.h - класс, определяющий интерфейс целого числа и методы
// работы с ним
//------------------------------------------------------------------------------

#include "number.h"

// Класс с интерфейсом для целых чисел. Является первым в иерархиии
// интерфейсов для пирамидальных классов. Необходим для того, чтобы
// не передавать реализацию самого целого числа другим классам
// в пирамидальной иерархии.
class IntFace: public Number
{
public:
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Здесь стоит интерфейс Number
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -

    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
	// Далее идут собственные чистые методы, перадаваемые по наследству
	// и, следовательно, переопределяемые.

	// Вычитание второго операнда из первого, целочисленного, аргумента
	// Продолжатель диспетчеризации, начатой SubtractDirect
	virtual Number* SubtFromFirstInt(int v) = 0;

    // Вычитание из первого операнда целочисленного, аргумента
	// Продолжатель диспетчеризации, начатой SubtractReverse
	virtual Number* SubtInt(int v) = 0;

};

#endif
