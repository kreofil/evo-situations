// FigRectPerimeter.cpp - Реализация функции, вычисляющей периметр прямоугольника

#include <iostream>

#include "FigRectangle.h"
#include "FigPerimeter.h"

//------------------------------------------------------------------------------
// Функция обеспечивающая вычисление периметра прямоугольника,
// выступающего в роли основы специализации
// Задается с использованием прототипа только для требуемой функции
double Perimeter(Rectangle& r);

//------------------------------------------------------------------------------
//  Функции вычисления периметра прямоугольника-специализации
double Perimeter(FigRectangle& fr) {
    Rectangle& r = fr.r;
    return Perimeter(r);
}


//=============================================================================
// Функция - оболочкаи, используемая для параметризации данной специализации,
// регистрируемая в соответствующем параметрическом массиве
//=============================================================================
namespace {
    // Вычисление периметра специализации фигуры-прямоугольника как фигуры
    double PerimeterFigRectangle(Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigRectangle()) {
            return Perimeter(static_cast<FigRectangle&>(f));
        }
        else {
            cerr << "PerimeterFigRectangle: Incorrect convertion Figure to FigRectangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-прямоугольника из потока как фигуры.
    class RegPerimeterFigRectangle {
    public:
        RegPerimeterFigRectangle(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вычисления периметра прямоугольника-специализации
            perimeterFunc[GetRegMarkFigRectangle()] = PerimeterFigRectangle;
            cout << "    perimeterFunc[" << GetRegMarkFigRectangle() << "] = PerimeterFigRectangle" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegPerimeterFigRectangle regPerimeterFigRectangle("Registration of PerimeterFigRectangle");
}
