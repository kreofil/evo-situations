//==============================================================================
//  main.cpp
//==============================================================================
//  Главный файл проекта имитационной модели "Электронная жизнь
//  Программа разработана в учебных целях для демонстрации процесса
//  использования языка программирования Си
//  и процедурно-параметрической парадигмы программирования
//==============================================================================
//  Распространяется свободно и без каких-либо ограничений.
//  Copyright (c) 2023 by Alexander Legalov
//
//  Email : legalov@mail.ru
//  Site  : http://www.softcraft.ru
//
//==============================================================================

#include <unistd.h>
#include <stdlib.h>
#include <time.h>
// #include "map.h"
#include "entity.h"
#include "eworld.h"
// #include "eworldlabelview.h"

void clrscr(void) {
    //char a[80];
    printf("\033[2J");      // Clear the entire screen.
    printf("\033[0;0f");    // Move cursor to the top left hand corner
}

//------------------------------------------------------------------------------
int main (/*int argc, char** argv*/)
{
    srand(time(0));     // Начальная установка ГСЧ
    EWorld eWorld;
    // Загрузка начальных параметров жизни из текстового образа
    AttachMapAndEntityList(&eWorld.map, &eWorld.entityList);
    LifeLoad("../data/eworld-01.dat", &eWorld);
    EntityListInit(&(eWorld.entityList));
    CreateMap(&eWorld);

    clrscr();
    // DrawTextMap(&eWorld); // Тестовый вывод исходного файла
    // DrawWorld(&eWorld);
    // EntityListOut(&(eWorld.entityList));

    int step = 0;
    while(1) {
        clrscr();
        DrawWorld(&eWorld);
        printf("Step:    %d\n", step++);
        printf("Foods:   %d\n", eWorld.entityList.foodCount);
        printf("Feeders: %d\n", eWorld.entityList.feederCount);
        printf("Entities: %d\n", eWorld.entityList.busyCount);
        printf("Empty: %d\n", eWorld.entityList.freeCount);
        printf("Space: %d\n", eWorld.map.spaceCount);
        // if(eWorld.map.spaceCount == eWorld.entityList.foodCount) {
        if((eWorld.entityList.feederCount == 0) && (eWorld.entityList.foodCount == 0)) {
                // Пища закончилась. Пищееды вымерли.
                printf("GAME OVER!!!\nThe World is dead!!!\n");
                exit(10);
        }
        if((eWorld.entityList.feederCount == 0) && (eWorld.entityList.foodCount != 0)) {
                // Пищееды вымерли. Осталась только пища
                perror("GAME OVER!!!\nOnly Food will be more...\n");
                exit(11);
        }
        sleep(1);
        EWorldNextState(&eWorld);
    }
    return 0;
}
