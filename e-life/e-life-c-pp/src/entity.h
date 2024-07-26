#ifndef ENTITY_H
#define ENTITY_H

#include "food.h"
#include "feeder.h"
#include "map.h"
#include <stddef.h>

// Указатель на сформированную карту, к которой сущность имеет доступ
static Map* map = NULL;
// Указатель на список сущностей в сформированном мире
static struct EntityList* entityList  = NULL;

// Присоединение карты мира и списка сущностей к статическим указателям
void AttachMapAndEntityList(Map* map, struct EntityList* entityList);

// Структура, предназначенная для описания обобщенной сущности.
// включающей пищу и ее поедателей.
typedef struct Entity {
    // Текущее положение любой сущности определяется ее координатами.
    int i;      // Строка плана
    int j;      // Столбец плана
    int index;  // Индекс в списке сущностей
    // Временный массив, задающий информацию об обозреваемых окресностях.
    // Информация берется путем осмотра соседних клеток карты.
    // Элементы массива распределены с верхней позиции карты по часовой стрелке:
    // 0->up, 1->upRight, 2->right, 3->downRight,
    // 4->down, 5->downLeft, 6->left, 7->upLeft.
    Entities mapInfo[8];
    // Указатель на Э-мир. Используется для регистрации
    // в списке активных сущностей после их размножения
    // или для их удаления из списка
    // EWorld* pEWorld;
    // Альтернативные сущности
    Entities tag;   // Тип сущности
    union {
        Food food;
        Feeder feeder;
    };
} Entity;

// Проверка состояния очередной сущности
void EntityNextState(Entity* entity);

// Метод формирующий массив информации путем опроса карты
// вокруг заданных координат
void GetMapInfo(Entity* entity, Map* map);

// Выдача координат активной сущности по строке
int GetI(Entity* entity);

// Выдача координат активной сущности по столбцу
int GetJ(Entity* entity); // { return entity->j; }

// Преобразование текущей позиции в mapInfo в новую координату по строке
int ConvertMapInfoToI(Entity* entity, int k);

// Преобразование текущей позиции в mapInfo в новую координату по столбцу
int ConvertMapInfoToJ(Entity* entity, int k);

// Генератор случайных чисел, осуществляющий выбор целого в диапазоне [0...k).
// Начальная инициализация генератора осуществляется в главной функции
int RandomSelect(int k);

// Установка новых координат сущности
void SetPosition(Entity* entity, int i, int j);

//==============================================================================
// Инициализация пищееда-специализации
void FeederInit(Entity* entity, int i, int j, int index);

// Формирование состояния пищееда-специализации на очередном шаге
void FeederNextState(Entity* entity);

// Клонирование пищееда-специализации с занесением в список сущностей
bool FeederClone(Entity* entity);

// Поедание пищеедом-специализацией пищу
bool FeederEatingFood(Entity* entity);

// Перемещение пищееда-специализацией на случайно выбранную свободную клетку
void FeederRandomStep(Entity* entity);

//==============================================================================
// Функции, реализующие работу с пищей
//==============================================================================

// Инициализация пищи-специализации
void FoodSpecInit(Entity* entity, int i, int j, int index);

//==============================================================================
// Список активных сущностей, отображаемых на карте при моделировании.
// Реализуется через одномерный массив узлов сущностей, что определяет
// его статическую структуру

// Структура задающая сам список
typedef struct EntityList {
    Entity entity[MAX_MAP_HEIGHT*MAX_MAP_WIDTH];
    int freeCount;      // Счетчик свободных слотов
    int busyCount;      // Счетчик сущностей
    int foodCount;      // Счетчик пищи
    int feederCount;    // Счетчик пищеедов
} EntityList;

// Начальная инициализаци списка, когда все элементы свободны
void EntityListInit(EntityList* entityList);

// Добавление сущности в список
int AddEntityToList(EntityList* entityList, int i, int j, Entities e);

// Тестовый вывод списка сущностей
void EntityListOut(EntityList* el);

// Формирование состояния сущностей на следующем шаге обхода
void EntitiesNextState(EntityList* entityList);

// Клонирование пищи в список сущностей
// out: индекс клонированной сущности для ее дополнительной обработки
int CloneFood(EntityList* entityList, Entity* parent);

// Удаление из списка пищееда
void FeederErase(EntityList* entityList, Entity* entity);

// Удаление из списка пищи
void FoodErase(EntityList* entityList, Entity* entity);

// Удаление из списка пищи, используя координаты плана
void FoodEraseUsingPlan(EntityList* entityList, int i, int j);

#endif // ENTITY_H
