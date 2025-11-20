//==============================================================================
// figure-color-in.c - Обработчик специализации, осуществляющий
// ввод содержимого фигуры, подключенной к декоратору и декоратора (цвета).
//==============================================================================

#include <stdio.h>
// #include "figure-rectangle.h"
// #include "figure-triangle.h"
#include "figure-color.h"

//------------------------------------------------------------------------------
// Прототип функции ввода прямоугольника
void RectangleIn(Rectangle* r, FILE* ifst);
// Прототип функции ввода треугольника
void TriangleIn(Triangle* t, FILE* ifst);

//------------------------------------------------------------------------------
// Обобщенная функция ввода фигуры с цветом
void ColoredIn<Color* f>(FILE* ifst) {}
// Обработчик специализации, осуществлющий ввод прямоугольника с цветом
void ColoredIn<Color.rect* f>(FILE* ifst) {
    RectangleIn(&(f->@), ifst);
}
// Обработчик специализации, осуществлющий ввод треугольника с цветом
void ColoredIn<Color.trian* f>(FILE* ifst) {
    TriangleIn(&(f->@), ifst);
}

//------------------------------------------------------------------------------
// Ввод цветной (декорируемой) фигуры
void FigureIn<Figure.color* d>(FILE* ifst) {
    // В начале вводятся параметры подключенной фигуры
    // FigureIn<&(d->@.@)>(ifst);
    struct Color* dfp = (struct Color*)(&d->@);
    ColoredIn<dfp>(ifst);
    // Затем вводится содержимое декоратора (цвет)
    fscanf(ifst, "%x", &(d->@color));
}

//------------------------------------------------------------------------------
// Обобщенная функция создания декорируемой фигуры по признаку из файла
Figure* CreateDecoratedFigure<Figure* f>(int k) {
    return NULL;
}

// Обработчик специализации, создающий декорируемый прямоугольник
Figure* CreateDecoratedFigure<Color.rect* f>(int k) {
    return create_spec(Figure.color.rect);
}

// Обработчик специализации, создающий декорируемый прямоугольник
Figure* CreateDecoratedFigure<Color.trian* f>(int k) {
    return create_spec(Figure.color.trian);
}

//------------------------------------------------------------------------------
// Запуск проверки декоратора и создание соответствующей фигуры
// Единственное узкое место, так как добавление еще одной фигуры приведет
// к изменению кода из-за признака. Проблема в том, что цвет распространяется
// на разные фигуры, что затрудняет распределение входных значений.
Figure* FigureCreateUseTag<Figure.color *pFig>(int k) {
    if(k == 11) {
        return create_spec(Figure.color.rect);
    } else if(k == 12) {
        return create_spec(Figure.color.trian);
    } else {
        return NULL;
    }
}

//------------------------------------------------------------------------------
// Создание декоратора-треугольника как фигуры клонированием
// Figure* FigureCreateUseTag<Figure.decor *pFig>(int k) {
//     if(k == 12) {
//         // printf("k = %d: It is Color-triangle\n", k);
//         return create_spec(Figure.decor.Figure.trian);
//     } else {
//         return NULL;
//     }
// }
