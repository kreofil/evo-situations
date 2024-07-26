#ifndef __FigPerimeter__
#define __FigPerimeter__

#include "Figure.h"

//------------------------------------------------------------------------------
// Описание типа обобщенной функции, вычисляющей периметр фигуры

// Указатель на функцию, осуществляющую вычисление периметра фигуры
// с возвратом полученного значения
typedef double (*PerimeterFunc)(Figure& f);
// Описание переменной, используемой для регистрации функций вычисления периметра
extern PerimeterFunc perimeterFunc[];
// Счетчик зарегистрированных функций создания фигур-специализаций
//extern int perimeterFuncCounter;

//------------------------------------------------------------------------------
//  Функция вычисления периметра обобщенной фигуры
double Perimeter(Figure& f);

#endif
