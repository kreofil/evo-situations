//------------------------------------------------------------------------------
// Реализация обработчиков специализаций.
// Каждый обработчик может быть размещен в своей единице компиляции
//------------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>

#include "figure.h"
#include "figure_circle.h"
#include "print_figure.h"

// Вывод содержимого специализированного круга
static void print_figure_circle(figure* p_f) {
    figure_circle* p_fr = (figure_circle*)p_f;
    printf("circle: r= %d\n", p_fr->tail.r);
}

// Регистрация обработчика специализированного круга
// в обработчике обобщений
void  __attribute__ ((constructor(301))) register_print_figure_circle() {
    printf("%s\n", __FUNCTION__);   // тестовый вывод конструктора
    printf("  figure-circle tag = %u\n", get_figure_circle_tag());
    _print_figure_spec_register(get_figure_circle_tag,
                                print_figure_circle);
}
