//------------------------------------------------------------------------------
// circle.cpp - содержит методы круга
//------------------------------------------------------------------------------

// #include <iostream>
#include "circle.h"

//------------------------------------------------------------------------------
// Начальное значение признака специализации до регистрации
int Circle::tag = -1;

//------------------------------------------------------------------------------
// Конструктор, обеспечивающий формирование круга,
// установку признака и регистрацию в параметрических таблицах
Circle::Circle(): r{0} {
  if(tag == -1) {
    // Установка тега и размещение в параметрических таблицах
    tag = specCounter++;
    InP.push_back(Circle::InTP);
    OutP.push_back(Circle::OutTP);
  }
  specTag = tag;  // Инициализация собственного тега объекта
  // В противном случае регистрация уже состоялась
  // Тестовый вывод результатов регистрации
  // std::cout << "Circle tag = " << specTag << "\n";
}

//------------------------------------------------------------------------------
// Ввод содержимого круга,
// подключаемый через параметрическую таблицу
void Circle::InTP(Any* f, std::ifstream &ifst) {
  Circle* c = reinterpret_cast<Circle*>(f);
  ifst >> c->r;
}

//------------------------------------------------------------------------------
// Вывод содержимого круга,
// подключаемый через параметрическую таблицу
void Circle::OutTP(Any* f, std::ofstream &ofst) {
  Circle* c = reinterpret_cast<Circle*>(f);
  ofst << "It is Circle: r = " << c->r << "\n";
}