#ifndef EWORLD_H
#define EWORLD_H
//==============================================================================
//  eworld.h
//==============================================================================
//  EWorld описывает модель клеточного мира,
//  состоящего из недоступных и доступных полей.
//  Он содержит методы, обеспечивающие формирование данного мира
//  и обеспечивающие взаимодействие с его обитателями.
//==============================================================================

#include <stdio.h>
#include <stdbool.h>

#include "entity.h"
#include "map.h"

typedef struct EWorld {
    // Мир является прямоугольным пространством, задаваемым посредством
    // динамически формируемого символьного двумерного массива.
    // Формирование происходит путем чтения данных из памяти.
    char textMap[MAX_MAP_HEIGHT][MAX_MAP_WIDTH]; // Текстовое представление Э-мира
    int mapLines;       // Число строк в карте
    Map map;            // Рабочая карта
    // Список координат активных сущностей, осуществляющих изменение карты
    EntityList entityList;
    // Формирование строки для вывода координат существ
    // Счетчик обработанных за шаг активных сущностей
} EWorld;

// Получение непосредственного доступа к карте для прямой манипуляции с ней
static inline Map* GetMap(EWorld* eWorld) { return &(eWorld->map);}

// Загрузка начальных параметров жизни из текстового образа
void LifeLoad(char* fileName, EWorld* eWorld);

// Рисование карты представленной в виде набора строк символов, прочитанных
// из исходного конфигурационного файла
void DrawTextMap(EWorld* eWorld);

// Процедура загрузки карты из исходного списка строк
void CreateMap(EWorld* eWorld);

// Вывод текущего состояния карты на дисплей
void DrawWorld(EWorld* eWorld);

// Вычисление следующего состояния мира
void EWorldNextState(EWorld* eWorld);

// Тестовый вывод состояния Э-мира
void TestOut();

#endif // EWORLD_H
