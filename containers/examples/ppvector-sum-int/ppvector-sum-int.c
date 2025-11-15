// pp-vector-sum.c - тестирование ppVector
#include <stdio.h>
#include "ppvector.h"

//==============================================================================
// Все, что сопровождает формируемую специализацию вектора
//==============================================================================

ppVector+<int;>; // Целочисленная специализация вектора

//------------------------------------------------------------------------------
// Обработчик специализации, обеспечивающий вывод целочисленного элемента
void ppVector_element_print<ppVector.int* v>(FILE* f) {//, int index) {
  fprintf(f, "%d\n", v->@);
}

int ppVecor_sum(struct ppVector.int* pv_int) {
  // Суммирование элементов вектора
  int sum = 0;
  for(uint32_t i = 0; i < ppVector_size((ppVector*)pv_int); ++i) {
    ppVector_index((ppVector*)pv_int, i);
    sum += pv_int->@;
  }
  return sum;
}

//==============================================================================
// Тестовая функция
//==============================================================================

//------------------------------------------------------------------------------
int main(void) {
  // struct ppVector.int v_int = {sizeof(v_int.@),&(v_int.@)};
  ppVector_VAR(int, v_int)
  // ppVector_reserve((ppVector*)&v_int, 10);
  // Занесение значения в буфер вектора
  for(int i = 0; i < 10; ++i) {
    ppVector_PUSH_BACK(v_int, i+1)
  }
  // Тестовый вывод элементов вектора
  ppVector_print(stdout, (ppVector*)&v_int);

  printf("sum = %d\n", ppVecor_sum(&v_int));

  ppVector_destroy((ppVector*)&v_int);
  printf("value = %d; size = %u; capacity = %u\n",
         v_int.@,
         ppVector_size((ppVector*)&v_int),
         ppVector_capacity((ppVector*)&v_int)
  );

  return 0;
} // end main

