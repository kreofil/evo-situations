#ifndef __figure_decorator__
#define __figure_decorator__

//==============================================================================
// figure-decorator.h - описание специализации фигуры как декоратор
//==============================================================================

#include "figure.h"

typedef struct Decorator {
    unsigned int color; // цвет фигуры
} < Figure; > const Decorator; // Жесткая специализация декоратора как фигуры

//------------------------------------------------------------------------------
// Фигура - декоратор как специализация фигуры
Figure + < decor: Decorator; > ;

#endif // __figure_decorator__
