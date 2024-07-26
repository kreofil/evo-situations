// GetFigMark.cpp - Реализация функции, возвращающей значение признака текущей фигуры

#include "Figure.h"

// Получение признака текущей фигуры
int GetFigMark(Figure& f) {
    // Проверка на всякий случай
    if(f.mark > -1) {
        return f.mark;
    }
    else {
        return -1;
    }
}
