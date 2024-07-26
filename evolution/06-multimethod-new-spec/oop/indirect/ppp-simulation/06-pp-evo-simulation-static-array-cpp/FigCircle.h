#ifndef __FigCircle__
#define __FigCircle__

#include "Figure.h"
#include "Circle.h"

//------------------------------------------------------------------------------
// Структура FigCircle, определяющая содержимое круга как специализации фигуры
struct FigCircle: Figure {
    Circle c;
};

// Задается признак фигуры-круга
const int circleMark = 2;

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


//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод специализации фигуры-круга из потока
void In(ifstream &ifst, FigCircle& fc);

// Вывод специализации фигуры-круга в поток
void Out(ofstream &ofst, FigCircle& fc);

// Функции - оболочки, используемые для параметризации данной специализации

// Ввод специализации фигуры-круга из потока как фигуры
void InFigCircleValue(ifstream &ifst, Figure& f);

// Вывод специализации фигуры-круга в поток как фигуры
void OutFigCircle(ofstream &ofst, Figure& f);

#endif
