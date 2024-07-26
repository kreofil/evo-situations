// FigTriangleOutOnly.cpp - Реализация функции, вычисляющей пермиетр треугольника

#include "FigTriangle.h"

// Вывод только фигуры-треугольника как фигуры
// Никаких массивов-указателей. Только проверка признака
void OnlyFigTriangleOut(ofstream& ofst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == triangleMark) {
        Out(ofst, static_cast<FigTriangle&>(f));
    }
    // В противном случае ничего не выводится
}
