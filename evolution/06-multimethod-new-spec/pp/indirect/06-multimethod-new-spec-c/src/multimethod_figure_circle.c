//------------------------------------------------------------------------------
// Реализация обработчиков специализаций.
// Каждый обработчик может быть размещен в своей единице компиляции
// Но можно и совмещать, если специализации уже разработаны
//------------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>

#include "figure.h"
#include "figure_circle.h"
#include "multimethod_figure.h"

// Мультиметод для двух кругов
static void multimethod_figure_circle_circle(figure* p_f1, figure* p_f2) {
    printf("circle and circle\n");
}

// Регистрация мультиметода для двух кругов
// в обработчике обобщений
void  __attribute__
  ((constructor(301))) register_multimethod_figure_circle_circle() {
    printf("%s\n", __FUNCTION__);   // тестовый вывод конструктора
    _multimethod_figure_spec_register(get_figure_circle_tag,
                                      get_figure_circle_tag,
                                      multimethod_figure_circle_circle);
}
