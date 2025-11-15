// pp-vector-sum.c - тестирование ppVector
#include <stdio.h>
#include "ppvector.h"

//==============================================================================
// Все, что сопровождает формируемую специализацию вектора
//==============================================================================

ppVector+<double;>; // Cпециализация вектора double

//------------------------------------------------------------------------------
// Обработчик специализации, обеспечивающий вывод целочисленного элемента
void ppVector_element_print<ppVector.double* v>(FILE* f) {//, double index) {
  fprintf(f, "%f\n", v->@);
}

double ppVecor_sum(struct ppVector.double* pv_double) {
  // Суммирование элементов вектора
  double sum = 0;
  for(uint32_t i = 0; i < ppVector_size((ppVector*)pv_double); ++i) {
    ppVector_index((ppVector*)pv_double, i);
    sum += pv_double->@;
  }
  return sum;
}

//==============================================================================
// Тестовая функция
//==============================================================================

//------------------------------------------------------------------------------
int main(void) {
  // struct ppVector.double v_int = {sizeof(v_double.@),&(v_double.@)};
  ppVector_VAR(double, v_double)
  // ppVector_reserve((ppVector*)&v_double, 10);
  // Занесение значения в буфер вектора
  for(int i = 0; i < 10; ++i) {
    ppVector_PUSH_BACK(v_double, i+1)
  }
  // Тестовый вывод элементов вектора
  ppVector_print(stdout, (ppVector*)&v_double);

  printf("sum = %f\n", ppVecor_sum(&v_double));

  ppVector_destroy((ppVector*)&v_double);
  printf("value = %f; size = %u; capacity = %u\n",
         v_double.@,
         ppVector_size((ppVector*)&v_double),
         ppVector_capacity((ppVector*)&v_double)
  );

  return 0;
} // end main

