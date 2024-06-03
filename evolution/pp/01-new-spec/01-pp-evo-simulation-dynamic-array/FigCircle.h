#ifndef __FigCircle__
#define __FigCircle__

#include "Figure.h"
#include "Circle.h"

//------------------------------------------------------------------------------
// Структура FigCircle, определяющая содержимое круга как специализации фигуры
struct FigCircle: Figure {
    Circle c;
};

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigCircle();

//------------------------------------------------------------------------------
//  Функции используемые для обработки круга как специализации фигуры

// Инициализация существующей фигуры-круга
void Init(FigCircle& fc, int r);

// Создание фигуры-круга без инициализации сторон
FigCircle* CreateFigCircle();

// Создание фигуры-круга с инициализаций сторон
FigCircle* CreateFigCircleAndInit(int r);

// Создание фигуры-круга как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigCircleUseFileMark(int fileMark);

// Ввод специализации фигуры-круга из потока
void In(ifstream &ifst, FigCircle& fc);

// Вывод специализации фигуры-круга в поток
void Out(ofstream &ofst, FigCircle& fc);

// Удаление специализации фигуры-прямоугольника
void DeleteFigCircle(FigCircle* pfc);

#endif
