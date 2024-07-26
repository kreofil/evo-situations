// FigRectPerimeter.cpp - Реализация функции, вычисляющей пермиетр прямоугольника

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

#include <iostream>
// Периметр специализации фигуры-прямоугольника как фигуры
double PerimeterFigRectangle(Figure& f) {
    // Проверка на всякий случай
    if(f.mark == rectangleMark) {
        return Perimeter(static_cast<FigRectangle&>(f));
    }
    else {
        cerr << "InFigRectangle: Incorrect convertion Figure to FigRectangle" << endl;
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
        perimeterFunc[rectangleMark] = PerimeterFigRectangle;
        //perimeterFuncCounter++;
        cout << "    perimeterFunc[" << rectangleMark << "] = PerimeterFigRectangle" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register rectRegisterPerimeter("Registration of: PerimeterFigRectangle");
}
