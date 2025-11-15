// pp-vector-sum.c - тестирование ppVector
#include <stdio.h>
#include "ppvector.h"
#include "figure-rectangle.h"
#include "figure-triangle.h"

//==============================================================================
// Все, что сопровождает формируемую специализацию вектора
//==============================================================================

// Cпециализация вектора как указателей на обобщенные фигуры
ppVector+<figure_ptr:Figure*;>;
// Прототип обобщеннай функции вывода фигуры
void FigureOut<Figure *f>(FILE* ofst);

//------------------------------------------------------------------------------
// Обработчик специализации, обеспечивающий вывод фигуры через указатель на нее
void ppVector_element_print<ppVector.figure_ptr* v>(FILE* f) {
  FigureOut<v->@>(stdout);
}

//==============================================================================
// Тестовая функция
//==============================================================================

//------------------------------------------------------------------------------
int main(void) {
  ppVector_VAR(figure_ptr, figures)
  struct Figure.rect r; r.@x = 10; r.@y = 20;
  FigureOut<(Figure*)&r>(stdout);
  struct Figure.trian t; t.@a = 3; t.@b = 4; t.@c = 5;

  for(int i = 0; i < 5; ++i) {
    ppVector_PUSH_BACK(figures, (Figure*)&r)
    ppVector_PUSH_BACK(figures, (Figure*)&t)
  }
  ppVector_print(stdout, (ppVector*)&figures);

  ppVector_destroy((ppVector*)&figures);
  // Отсутствует возможность прямого использования указателя на специализацию
  // в "?" выражении. Поэтому реализовал через присваивание
  Figure* p = figures.@;
  printf("value = %s; size = %u; capacity = %u\n",
         (p == NULL) ? "NULL" : "It's Impossible!!!",
         ppVector_size((ppVector*)&figures),
         ppVector_capacity((ppVector*)&figures)
  );

  return 0;
} // end main

