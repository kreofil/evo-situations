#ifndef __Circle__
#define __Circle__

//------------------------------------------------------------------------------
// Структура Circle, определяющая содержимое круга
struct Circle {
    // Радиус круга
    int r;
};

//------------------------------------------------------------------------------
//  Функции используемые для обработки круга

// Инициализация существующего круга
void Init(Circle& c, int r);

// Создание круга с инициализаций сторон
Circle* CreateCircleAndInit(int r);

#include <fstream>
using namespace std;

// Ввод данных в существующий круг из потока
void In(ifstream &ifst, Circle& c);

// Вывод данных о круг в поток
void Out(ofstream &ofst, Circle& c);

#endif
