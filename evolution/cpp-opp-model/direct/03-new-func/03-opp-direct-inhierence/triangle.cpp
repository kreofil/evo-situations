//------------------------------------------------------------------------------
// triangle.cpp - содержит методы треугольника
//------------------------------------------------------------------------------

// #include <iostream>
#include "triangle.h"

//------------------------------------------------------------------------------
// Начальное значение признака специализации до регистрации
int Triangle::tag = -1;

//------------------------------------------------------------------------------
// Конструктор, обеспечивающий формирование треугольника,
// установку признака и регистрацию в параметрических таблицах
Triangle::Triangle(): a{0}, b{0}, c{0} {
  if(tag == -1) {
    // Установка тега и размещение в параметрических таблицах
    tag = specCounter++;
    InP.push_back(Triangle::InTP);
    OutP.push_back(Triangle::OutTP);
    PerimeterP.push_back(Triangle::PerimeterTP);
  }
  specTag = tag;  // Инициализация собственного тега объекта
  // В противном случае регистрация уже состоялась
  // Тестовый вывод результатов регистрации
  // std::cout << "Triangle tag = " << specTag << "\n";
}

//------------------------------------------------------------------------------
// Ввод содержимого треугольника,
// подключаемый через параметрическую таблицу
void Triangle::InTP(Figure* f, std::ifstream &ifst) {
  Triangle* t = reinterpret_cast<Triangle*>(f);
  ifst >> t->a >> t->b >> t->c;
}

//------------------------------------------------------------------------------
// Вывод содержимого треугольника,
// подключаемого через параметрическую таблицу
void Triangle::OutTP(Figure* f, std::ofstream &ofst) {
  Triangle* t = reinterpret_cast<Triangle*>(f);
  ofst << "It is Triangle: a = " << t->a
       << ", b = " << t->b
       << ", c = " << t->c << "\n";
}

