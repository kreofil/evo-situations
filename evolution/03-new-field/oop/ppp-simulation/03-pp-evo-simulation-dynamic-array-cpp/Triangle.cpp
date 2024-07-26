// Triangle.cpp - Реализация функций, осуществляющих обработку треугольника

#include "Triangle.h"

//------------------------------------------------------------------------------
//  Функции используемые для обработки треугольника

// Инициализация существующего треугольника
void Init(Triangle& t, int a, int b, int c) {
    t.a = a;
    t.b = b;
    t.c = c;
}


// Создание треугольника с инициализаций сторон
Triangle* CreateTriangleAndInit(int a, int b, int c) {
    Triangle* pt = new Triangle;
    Init(*pt, a, b, c);
    return pt;
}

// Ввод данных в существующий треугольник из потока
void In(ifstream &ifst, Triangle& t) {
    ifst >> t.a >> t.b >> t.c;
}

// Вывод данных о треугольнике в поток
void Out(ofstream &ofst, Triangle& t) {
    ofst << "Triangle: a = " << t.a << ", b = " << t.b << ", c = " << t.c << endl;
}
