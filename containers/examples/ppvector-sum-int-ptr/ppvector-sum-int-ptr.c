// pp-vector-sum.c - тестирование ppVector
#include <stdio.h>
#include "ppvector.h"

//==============================================================================
// Все, что сопровождает формируемую специализацию вектора
//==============================================================================

// Cпециализация вектора как указателей на целые числа
ppVector+<int_ptr:int*;>;

//------------------------------------------------------------------------------
// Обработчик специализации, обеспечивающий вывод целочисленного элемента
void ppVector_element_print<ppVector.int_ptr* v>(FILE* f) {//, int index) {
  fprintf(f, "%d\n", *(v->@));
}

int ppVecor_sum(struct ppVector.int_ptr* pv_int) {
  // Суммирование элементов вектора
  int sum = 0;
  for(uint32_t i = 0; i < ppVector_size((ppVector*)pv_int); ++i) {
    ppVector_index((ppVector*)pv_int, i);
    sum += *(pv_int->@);
  }
  return sum;
}

//==============================================================================
// Тестовая функция
//==============================================================================

//------------------------------------------------------------------------------
int main(void) {
  // struct ppVector.int v_int = {sizeof(v_int.@),&(v_int.@)};
  ppVector_VAR(int_ptr, v_int)
  // ppVector_reserve((ppVector*)&v_int, 10);
  // Занесение значения в буфер вектора
  int A[] = {1,2,3,4,5,6,7,8,9,10};
  for(int i = 0; i < 10; ++i) {
    ppVector_PUSH_BACK(v_int, (A+i))
  }
  // Тестовый вывод элементов вектора
  ppVector_print(stdout, (ppVector*)&v_int);

  printf("sum = %d\n", ppVecor_sum(&v_int));

  ppVector_destroy((ppVector*)&v_int);
  // Отсутствует возможность прямого использования указателя на специализацию
  // в "?" выражении. Поэтому реализовал через присваивание
  int* p = v_int.@;
  printf("value = %s; size = %u; capacity = %u\n",
         (p == NULL) ? "NULL" : "It's Impossible!!!",
         ppVector_size((ppVector*)&v_int),
         ppVector_capacity((ppVector*)&v_int)
  );

  return 0;
} // end main

