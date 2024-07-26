#ifndef __Container__
#define __Container__

#include "Figure.h"

//------------------------------------------------------------------------------
// Структура Container, обеспечивающая хранение геометрических фигур в одномерном массиве
// фиксированной размерности
const int maxSize = 100;   // Размерность массива
struct Container {
    // Массив, состоящий из указателей на фигуры
    Figure* storage[maxSize];
    // Текущее число элементов в контейнере
    int size;
};

//------------------------------------------------------------------------------
//  Функции используемые для обработки контейнера

// Инициализация существующего контейнера
void Init(Container& c);

// Создание контейнера
Container* CreateContainer(int x, int y);

// Очистка контейнера от фигур
void ClearContainer(Container& c);

//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод фигур в контейнер из потока
void In(ifstream &ifst, Container& c);

// Вывод фигур из контейнера в поток
void Out(ofstream &ofst, Container& c);

#endif
