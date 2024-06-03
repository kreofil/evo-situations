// FigTrianPerimeter.cpp - Реализация функции, вычисляющей пермиетр треугольника

#include "FigTriangle.h"
#include "FigPerimeter.h"

//------------------------------------------------------------------------------
// Функция обеспечивающая вычисление периметра треугольника,
// выступающего в роли основы специализации
// Задается с использованием прототипа только для требуемой функции
double Perimeter(Triangle& t);

//------------------------------------------------------------------------------
//  Функции вычисления периметра треугольника-специализации
double Perimeter(FigTriangle& tr) {
    Triangle& t = tr.t;
    return Perimeter(t);
}

#include <iostream>
// Периметр специализации фигуры-треугольника как фигуры
double PerimeterFigTriangle(Figure& f) {
    // Проверка на всякий случай
    if(f.mark == triangleMark) {
        return Perimeter(static_cast<FigTriangle&>(f));
    }
    else {
        cerr << "InFigTriangle: Incorrect convertion Figure to FigTriangle" << endl;
        throw; // Exeption;
    }
}

// Организация регистрации функции вычисления периметра, 
// обеспечивающей процедурно-параметрический полиморфизм
namespace {
    // Класс, обеспечивающий формирование нужных связей в своем конструкторе.
    class Register {
    public:
        Register(const char* regInfo);
    };

    Register::Register(const char* regInfo) {
        cout << regInfo << endl;
        // Регистрация функции вычисления периметра
        perimeterFunc[triangleMark] = PerimeterFigTriangle;
        //perimeterFuncCounter++;
        cout << "    perimeterFunc[" << triangleMark << "] = PerimeterFigTriangle" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register trianRegisterPerimeter("Registration of: PerimeterFigTriangle");
}
