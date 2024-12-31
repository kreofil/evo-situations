#ifndef __figure__
#define __figure__

//==============================================================================
// figure.h - содержит описание структуры обобщенной фигуры
//==============================================================================

//------------------------------------------------------------------------------
// структура, обобщающая функции ввода вывода
typedef struct Figure {} <> Figure;

//------------------------------------------------------------------------------
// Описание функций интерфейса

// Обобщающая функция для ввода обобщенной фигуры
void In<Figure *f>();

// Обобщающая функция для вывода обобщенной фигуры
void Out<Figure *f>();

// Функция ввода, осуществляющая непосредственную обработку обобщения
// независимо от того, какая из специализаций поступает на ее вход.
void InGeneralFigure(Figure *f);

// Функция вывода, осуществляющая непосредственную обработку обобщения
// независимо от того, какая из специализаций поступает на ее вход
void OutGeneralFigure(Figure *f);

#endif // __figure__