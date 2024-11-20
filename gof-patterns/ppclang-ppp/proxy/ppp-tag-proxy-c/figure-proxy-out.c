//==============================================================================
// figure-proxy-out.c - Обработчик специализации, осуществляющий
// вывод содержимого фигуры, подключенной к декоратору и декоратора (цвета).
//==============================================================================

#include "figure-proxy.h"
#include <stdio.h>

//------------------------------------------------------------------------------
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure * f>(FILE* ofst);

//------------------------------------------------------------------------------
// Ввод прокси. Возможно совместно с фигурой, если она создана.
void FigureOut<Figure.proxy * p>(FILE* ofst) {
    // В начале выводится прокси
    fprintf(ofst, "Proxy uses file %s\n    ", p->@fileName);
    // Затем содержимое подключенной фигуры
    if(p->@f != NULL) {
        FigureOut<p->@f>(ofst);
    } else {
        fprintf(ofst, "No figure\n");
    }
}