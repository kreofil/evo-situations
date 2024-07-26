#ifndef __Rectangle__
#define __Rectangle__

//------------------------------------------------------------------------------
// Структура Rectangle, определяющая содержимое прямоугольника
struct Rectangle {
    // Стороны прямоугольника
    int x;
    int y;
};

//------------------------------------------------------------------------------
//  Функции используемые для обработки прямоугольника

// Инициализация существующего прямоугольника
void Init(Rectangle& r, int x, int y);

// Создание прямоугольника с инициализаций сторон
Rectangle* CreateRectangleAndInit(int x, int y);

#include <fstream>
using namespace std;

// Ввод данных в существующий прямоугольник из потока
void In(ifstream &ifst, Rectangle& r);

// Вывод данных о прямоугольник в поток
void Out(ofstream &ofst, Rectangle& r);

#endif
