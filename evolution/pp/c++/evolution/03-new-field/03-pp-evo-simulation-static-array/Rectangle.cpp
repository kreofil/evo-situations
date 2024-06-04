// Rectangle.cpp - Реализация функций, осуществляющих обработку прямоугольника

#include "Rectangle.h"

//------------------------------------------------------------------------------
//  Функции используемые для обработки прямоугольника

// Инициализация существующего прямоугольника
void Init(Rectangle& r, int x, int y) {
    r.x = x;
    r.y = y;
}


// Создание прямоугольника с инициализаций сторон
Rectangle* CreateRectangleAndInit(int x, int y) {
    Rectangle* pr = new Rectangle;
    Init(*pr, x, y);
    return pr;
}

// Ввод данных в существующий прямоугольник из потока
void In(ifstream &ifst, Rectangle& r) {
    ifst >> r.x >> r.y;
}

// Вывод данных о прямоугольнике в поток
void Out(ofstream &ofst, Rectangle& r) {
    ofst << "Rectangle: x = " << r.x << ", y = " << r.y << endl;
}
