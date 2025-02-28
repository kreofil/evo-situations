#ifndef __tree__
#define __tree__

// tree.h - построение двоичного дерева
// Объявление структур и  базовых функций, связанных с обработкой абстрактного
// двоичного дерева

#include <stdio.h>
#include "value.h"

#define step  "    "

//------------------------------------------------------------------------------
// Промежуточный обобщенный узел двоичного дерева,
// подменяемый на конкретные специализации
typedef struct Node {
  struct Value *value;  // Значение, хранимое в узле дерева
  struct Node  *left;   // Указатель на узел левого поддерева
  struct Node  *right;  // Указатель на узел правого поддерева
  struct Node  *parent; // Указатель на родительский узел
} Node;

// Структура, задающея корень дерева и вспомогательные указатели
// для работы с ним
typedef struct Tree {
  Node*  root;       // корень создаваемого дерева имен
  Node*  p_find;     // указатель на найденный элемент таблицы
  Node** pp_find;    // указатель, хранящий указатель на
                     // точку подстановки нового элемента
} Tree;

// Начальная инициализация дерева
void InitTree(Tree* tree);

// Добавление значения в дерево
void AppendToTree(Tree* tree, Value* value);

// Удаление элемента дерева из текущей точки подстановки
Value* DeleteNodeOfTree(Tree* tree, Value* value);

// Вывод элементов дерева в указанный поток, который
// должен быть предварително создан
void OutTreeValues(FILE* file, Tree* tree);

// Удаление всех элементов дерева (очистка от данных)
void EmptyTree(Tree* tree);

// Вывод значения указанного элемента, из данного узла дерева
void OutCurrentTreeValue(FILE* file, Value* value);

// int find(Tree*, char*);     // НАХОЖДЕНИЕ ЭЛЕМЕНТА ТАБЛИЦЫ С ЗАДАННЫМ ИМЕНЕМ
// void incl(Tree*, char*);    // ВКЛЮЧЕНИЕ НОВОГО ЭЛЕМЕНТА В ТАБЛИЦУ
// void del(Tree*);            // УДАЛЕНИЕ ЭЛЕМЕНТА ИЗ ТАБЛИЦЫ
// void output(Tree*, char*);  // ПЕЧАТЬ ТАБЛИЦЫ ИМЕН В ФАЙЛЕ И НА ЭКРАНЕ
// void treeOut(FILE* f, Tree* tree); // Вывод дерева в поток

#endif // __tree__
