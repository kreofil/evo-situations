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
	// При использовании RTTI ничего не надо, кроме вывода.
	// Остальное реализуется после получения типа.
	// Вывод значения числа в стандартный поток
	virtual void StdOut() = 0;
    //- - - - - - - - - - - - - - - - - - - - - - - - - - - - - -
};

#endif
