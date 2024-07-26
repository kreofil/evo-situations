// FigTrianPerimeter.cpp - Реализация функции, вычисляющей периметр треугольника

#include <iostream>

#include "FigTriangle.h"
#include "FigPerimeter.h"

//------------------------------------------------------------------------------
// Функция обеспечивающая вычисление периметра треугольника,
// выступающего в роли основы специализации
// Задается с использованием прототипа только для требуемой функции
double Perimeter(Triangle& t);

//------------------------------------------------------------------------------
//  Функции вычисления периметра треугольника-специализации
double Perimeter(FigTriangle& ft) {
    Triangle& t = ft.t;
    return Perimeter(t);
}


//=============================================================================
// Функция - оболочкаи, используемая для параметризации данной специализации,
// регистрируемая в соответствующем параметрическом массиве
//=============================================================================
namespace {
    // Вычисление периметра специализации фигуры-треугольника как фигуры
    double PerimeterFigTriangle(Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigTriangle()) {
            return Perimeter(static_cast<FigTriangle&>(f));
        }
        else {
            cerr << "PerimeterFigTriangle: Incorrect convertion Figure to FigTriangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-треугольника из потока как фигуры.
    class RegPerimeterFigTriangle {
    public:
        RegPerimeterFigTriangle(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вычисления периметра треугольника-специализации
            perimeterFunc[GetRegMarkFigTriangle()] = PerimeterFigTriangle;
            cout << "    perimeterFunc[" << GetRegMarkFigTriangle() << "] = PerimeterFigTriangle" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegPerimeterFigTriangle regPerimeterFigTriangle("Registration of PerimeterFigTriangle");
}
