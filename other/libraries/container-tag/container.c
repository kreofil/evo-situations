// container.c
// Реализация базовых функций, связанных с обработкой
// однонаправленного кольцевого массива

#include <stdio.h>
#include <stdlib.h>
#include "container.h"

//==============================================================================
// Обобщенные функции для работы с контейнером

//------------------------------------------------------------------------------
// Начальная инициализация контейнера
void InitContainer<Container* container>() {} // = 0;

//------------------------------------------------------------------------------
// Добавление значения в хвост контейнера
void AppendContainer<Container* container>(Value* value) {} // = 0;

//------------------------------------------------------------------------------
// Вывод элементов контейнера в указанный файл, который
// должен быть предварително открыт
void OutContainerValues<Container* container>(FILE* file) {} // = 0;

//------------------------------------------------------------------------------
// Удаление всех элементов из контейнера (очистка от данных)
void EmptyContainer<Container* container>() {} // = 0;

//==============================================================================
// Дополнительно добавлены функции итератора из Design Patterns

//------------------------------------------------------------------------------
// Указатель на значение первого элемента контейнера
void First<Container* container>() {} // = 0;

//------------------------------------------------------------------------------
// Перевод указателя на значение следующего элемента контейнера
void Next<Container* container>() {} // = 0;

//------------------------------------------------------------------------------
// Проверка выхода за последний элемент контейнера
_Bool IsDone<Container* container>() {return 0;} // = 0;

//------------------------------------------------------------------------------
// Указатель на значение текущего элемента контейнера
Value* CurrentItem<Container* container>() {return NULL;} // = 0;