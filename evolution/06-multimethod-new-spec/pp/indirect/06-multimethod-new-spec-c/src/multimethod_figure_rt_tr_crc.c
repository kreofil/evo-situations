//------------------------------------------------------------------------------
// Реализация обработчиков специализаций.
// Каждый обработчик может быть размещен в своей единице компиляции
// Но можно и совмещать, если специализации уже разработаны
//------------------------------------------------------------------------------
#include <stdlib.h>
#include <stdio.h>

#include "figure.h"
#include "figure_rectangle.h"
#include "figure_triangle.h"
#include "figure_circle.h"
#include "multimethod_figure.h"

// Мультиметод для прямоугольника и круга
static void multimethod_figure_rectangle_circle(figure* p_f1, figure* p_f2) {
    printf("rectangle and circle combination\n");
}

// Регистрация мультиметода для прямоугольника и круга
// в обработчике обобщений
void  __attribute__
  ((constructor(301))) register_multimethod_figure_rectangle_circle() {
    printf("%s\n", __FUNCTION__);   // тестовый вывод конструктора
    _multimethod_figure_spec_register(get_figure_rectangle_tag,
                                      get_figure_circle_tag,
                                      multimethod_figure_rectangle_circle);
}

// Мультиметод для треугольника и круга
static void multimethod_figure_triangle_circle(figure* p_f1, figure* p_f2) {
    printf("triangle + circle combination\n");
}

// Регистрация мультиметода для треугольника и круга
// в обработчике обобщений
void  __attribute__
  ((constructor(301))) register_multimethod_figure_triangle_circle() {
    printf("%s\n", __FUNCTION__);   // тестовый вывод конструктора
    _multimethod_figure_spec_register(get_figure_triangle_tag,
                                      get_figure_circle_tag,
                                      multimethod_figure_triangle_circle);
}

// Мультиметод для круга и прямоугольника
static void multimethod_figure_circle_rectangle(figure* p_f1, figure* p_f2) {
  printf("circle before rectangle\n");
}

// Регистрация мультиметода для круга и прямоугольника
// в обработчике обобщений
void  __attribute__
((constructor(301))) register_multimethod_figure_circle_rectangle() {
  printf("%s\n", __FUNCTION__);   // тестовый вывод конструктора
  _multimethod_figure_spec_register(get_figure_circle_tag,
                                    get_figure_rectangle_tag,
                                    multimethod_figure_circle_rectangle);
}

// Мультиметод для круга и треугольника
static void multimethod_figure_circle_triangle(figure* p_f1, figure* p_f2) {
  printf("circle + triangle\n");
}

// Регистрация мультиметода для круга и треугольника
// в обработчике обобщений
void  __attribute__
((constructor(301))) register_multimethod_figure_circle_triangle() {
  printf("%s\n", __FUNCTION__);   // тестовый вывод конструктора
  _multimethod_figure_spec_register(get_figure_circle_tag,
                                    get_figure_triangle_tag,
                                    multimethod_figure_circle_triangle);
}
