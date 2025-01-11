//==============================================================================
// main.c - содержит главную функцию,
// обеспечивающую простое тестирование
// эволюционно расширяемых перечислимых типов
//==============================================================================

#include <stdio.h>

//------------------------------------------------------------------------------
// Основа простого эволюционно расширяемого перечислимого типа
typedef struct Enum{}<> Enum;

// Специализации перечислимого типа
Enum + <one:   void;>;
Enum + <two:   void;>;
Enum + <three: void;>;

// Обобщенная функция вывода значения перечислимого типа
void OutEnum<Enum* e>() {printf("It is Zero. Size = %lu\n", sizeof(Enum));}

// Обработчики специализаций
void OutEnum<Enum.one* e>() {
  printf("It is One. Size = %lu\n", sizeof(*e));
  // printf("It is One. Size = %lu\n", sizeof(Enum.one));
}

void OutEnum<Enum.two* e>() {
  printf("It is Two. Size = %lu\n", sizeof(*e));
  // printf("It is Two. Size = %lu\n", sizeof(Enum.two));
}

void OutEnum<Enum.three* e>() {
  printf("It is Three. Size = %lu\n", sizeof(*e));
  // printf("It is Three. Size = %lu\n", sizeof(Enum.three));
}

#define set(gen_type, spec_ptr)   init_spec(gen_type, (spec_ptr))



//------------------------------------------------------------------------------
int main() {
  struct Enum e0;
  OutEnum<&e0>();

  struct Enum.one e1;
  OutEnum<&e1>();

  struct Enum.two e2;
  OutEnum<&e2>();

  struct Enum.three e3;
  OutEnum<&e3>();

  init_spec(Enum.one, &e3);
  OutEnum<&e3>();

  set(Enum.three, &e0);
  OutEnum<&e0>();

  init_spec(Enum.two, &e0);
  OutEnum<&e0>();

  return 0;
}
