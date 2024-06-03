#ifndef __FigTriangle__
#define __FigTriangle__

#include "Figure.h"
#include "Triangle.h"

//------------------------------------------------------------------------------
// Структура FigTriangle, определяющая содержимое треугольника как специализации фигуры
struct FigTriangle: Figure {
    Triangle t;
};

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigTriangle();

//------------------------------------------------------------------------------
//  Функции используемые для обработки треугольника как специализации фигуры

// Инициализация существующей фигуры-треугольника
void Init(FigTriangle& ft, int a, int b, int c);

// Создание фигуры-треугольника без инициализации сторон
FigTriangle* CreateFigTriangle();

// Создание фигуры-треугольника с инициализаций сторон
FigTriangle* CreateFigTriangleAndInit(int a, int b, int c);

// Создание фигуры-треугольника как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigTriangleUseFileMark(int fileMark);

// Ввод специализации фигуры-треугольника из потока
void In(ifstream &ifst, FigTriangle& ft);

// Вывод специализации фигуры-треугольника в поток
void Out(ofstream &ofst, FigTriangle& ft);

// Удаление специализации фигуры-треугольника
void DeleteFigTriangle(FigTriangle* pft);

#endif
