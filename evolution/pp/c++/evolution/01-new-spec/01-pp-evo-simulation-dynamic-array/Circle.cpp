// Circle.cpp - Реализация функций, осуществляющих обработку круга

#include "Circle.h"

//------------------------------------------------------------------------------
//  Функции используемые для обработки круга

// Инициализация существующего круга
void Init(Circle& c, int r) {
    c.r = r;
}


// Создание круга с инициализаций сторон
Circle* CreateCircleAndInit(int r) {
    Circle* pc = new Circle;
    Init(*pc, r);
    return pc;
}

// Ввод данных в существующий круг из потока
void In(ifstream &ifst, Circle& c) {
    ifst >> c.r;
}

// Вывод данных о круге в поток
void Out(ofstream &ofst, Circle& c) {
    ofst << "Circle: r = " << c.r << endl;
}
