//------------------------------------------------------------------------------
// rectangle.cpp - содержит методы прямоугольника
//------------------------------------------------------------------------------

#include <iostream>
#include "rectangle.h"

//------------------------------------------------------------------------------
// Начальное значение признака специализации до регистрации
int Rectangle::tag = -1;

//------------------------------------------------------------------------------
// Конструктор, обеспечивающий формирование прямоугольника,
// установку признака и регистрацию в параметрических таблицах
Rectangle::Rectangle(): x{0}, y{0} {
  // std::cout << "Rectangle 01: Tag = " << tag << "\n";
  if(tag == -1) {
    // Установка тега и размещение в параметрических таблицах
    tag = specCounter++;
    InP.push_back(Rectangle::InRP);
    OutP.push_back(Rectangle::OutRP);
  }
  specTag = tag;  // Инициализация собственного тега объекта
  // В противном случае регистрация уже состоялась
  // Тестовый вывод результатов регистрации
  // std::cout << "Rectangle tag = " << specTag << "\n";
}

//------------------------------------------------------------------------------
// Ввод содержимого прямоугольника,
// подключаемый через параметрическую таблицу
void Rectangle::InRP(Figure* f, std::ifstream &ifst) {
  Rectangle* r = reinterpret_cast<Rectangle*>(f);
  ifst >> r->x >> r->y;
}

//------------------------------------------------------------------------------
// Вывод содержимого прямоугольника,
// подключаемый через параметрическую таблицу
void Rectangle::OutRP(Figure* f, std::ofstream &ofst) {
  Rectangle* r = reinterpret_cast<Rectangle*>(f);
  ofst << "It is Rectangle: x = " << r->x << ", y = " << r->y << "\n";
}
