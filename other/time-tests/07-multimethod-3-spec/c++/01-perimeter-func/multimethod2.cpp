//==============================================================================
// multimethod2.cpp - содержит функции, определяющие реализацию мультиметода
// для ОО подхода при добавлении круга
//==============================================================================

#include "rectangle.h"
#include "triangle.h"
#include "circle.h"

//------------------------------------------------------------------------------
// Обработчик круга и прямоугольника
void Rectangle::FirstCircle(Circle& circ, std::ofstream &ofst) {
  ofst << "Circle -  Rectangle Combination\n";
}

//------------------------------------------------------------------------------
// Обработчик круга и треугольника
void Triangle::FirstCircle(Circle& circ, std::ofstream &ofst) {
  ofst << "Circle - Triangle Combination\n";
}

//------------------------------------------------------------------------------
// Мультиметод, определяющий вход в круг
void Circle::Multimethod(Figure& fig2, std::ofstream &ofst) {
    fig2.FirstCircle(reinterpret_cast<Circle&>(*this), ofst);
}

// Обработчик прямоугольника и круга
void Circle::FirstRectangle(Rectangle& rect, std::ofstream &ofst) {
    ofst << "Rectangle - Circle Combination\n";
}

// Обработчик треугольника и круга
void Circle::FirstTriangle(Triangle& trian, std::ofstream &ofst) {
    ofst << "Triangle - Circle Combination\n";
}

// Обработчик двух кругов
void Circle::FirstCircle(Circle& circ, std::ofstream &ofst) {
    ofst << "Circle - Circle Combination\n";
}


//==============================================================================
// Тестовый мультиметод, осуществляющий вычисление для периметров
//==============================================================================

//------------------------------------------------------------------------------
// Обработчик круга и прямоугольника
double Rectangle::FirstCirclePerimeter(Circle& circ) {
  return circ.Perimeter() * Perimeter();
}

//------------------------------------------------------------------------------
// Обработчик круга и треугольника
double Triangle::FirstCirclePerimeter(Circle& circ) {
  return circ.Perimeter() * Perimeter();
}

//------------------------------------------------------------------------------
// Мультиметод, определяющий вход в круг
double Circle::MultimethodPerimeter(Figure& fig2) {
  return fig2.FirstCirclePerimeter(reinterpret_cast<Circle&>(*this));
}

// Обработчик прямоугольника и круга
double Circle::FirstRectanglePerimeter(Rectangle& rect) {
  return rect.Perimeter() * Perimeter();
}

// Обработчик треугольника и круга
double Circle::FirstTrianglePerimeter(Triangle& trian) {
  return trian.Perimeter() * Perimeter();
}

// Обработчик двух кругов
double Circle::FirstCirclePerimeter(Circle& circ) {
  return circ.Perimeter() * Perimeter();
}
