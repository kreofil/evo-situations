#ifndef __Triangle__
#define __Triangle__

//------------------------------------------------------------------------------
// Структура Triangle, определяющая содержимое треугольника
struct Triangle {
    // Стороны треугольника
    int a;
    int b;
    int c;
};

//------------------------------------------------------------------------------
//  Функции используемые для обработки треугольника

// Инициализация существующего треугольника
void Init(Triangle& t, int a, int b, int c);

// Создание треугольника с инициализаций сторон
Triangle* CreateTriangleAndInit(int a, int b, int c);

#include <fstream>
using namespace std;

// Ввод данных в существующий треугольник из потока
void In(ifstream &ifst, Triangle& t);

// Вывод данных о треугольнике в поток
void Out(ofstream &ofst, Triangle& t);

#endif
