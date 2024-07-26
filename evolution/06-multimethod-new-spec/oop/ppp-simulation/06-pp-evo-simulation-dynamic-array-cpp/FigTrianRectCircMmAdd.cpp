// FigTrianRectCircMmAdd.cpp - Реализация обработчиков специализаций мультиметода
// для всех комбинаций треугольника, прямоугольника и круга, добавленного уже 
// существующим обработчикам только треугольника и прямоугольника.
// Сделано в одном файле, но может быть и разнесено.

#include "FigTriangle.h"
#include "FigRectangle.h"
#include "FigCircle.h"
#include "FigMm.h"
#include <iostream>

//------------------------------------------------------------------------------
// Функции-обработчики специализаций

//  Обработчик специализации, вычисляющий отношения между треугольником и кругом
void TrianCircOut(ofstream &ofst, FigTriangle& ft1, FigCircle& fc2) {
    ofst << "Triangle & Circle Company" << endl;
    ofst << "     ";
    Out(ofst, ft1);
    ofst << "     ";
    Out(ofst, fc2);
}

//  Обработчик специализации, вычисляющий отношения между прямоугольником и кругом
void RectCircOut(ofstream &ofst, FigRectangle& fr1, FigCircle& fc2) {
    ofst << "We have Rectangle & Circle after its" << endl;
    ofst << "     ";
    Out(ofst, fr1);
    ofst << "     ";
    Out(ofst, fc2);
}

//  Обработчик специализации, вычисляющий отношения между кругом и треугольником
void CircTrianOut(ofstream &ofst, FigCircle& fc1, FigTriangle& ft2) {
    ofst << "This Circle is before Triangle" << endl;
    ofst << "     ";
    Out(ofst, fc1);
    ofst << "     ";
    Out(ofst, ft2);
}

//  Обработчик специализации, вычисляющий отношения между кругом и прямоугольником
void CircRectOut(ofstream &ofst, FigCircle& fc1, FigRectangle& fr2) {
    ofst << "Circle + Rectanle = 4 Angles" << endl;
    ofst << "     ";
    Out(ofst, fc1);
    ofst << "     ";
    Out(ofst, fr2);
}

//  Обработчик специализации, вычисляющий отношения между двумя кругами
void CircCircOut(ofstream &ofst, FigCircle& fc1, FigCircle& fc2) {
    ofst << "2 * Circle = 8" << endl;
    ofst << "     ";
    Out(ofst, fc1);
    ofst << "     ";
    Out(ofst, fc2);
}

//------------------------------------------------------------------------------
// Функции-оболочки над обработчикаи специализаций

// Оболочка вокруг обработчика треугольника и круга
void MmTrianCircSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigTriangle() && f2.mark == GetRegMarkFigCircle()) {
        return TrianCircOut(ofst, static_cast<FigTriangle&>(f1), static_cast<FigCircle&>(f2));
    }
    else {
        cerr << "MmTrianCircSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика прямоугольника и круга
void MmRectCircSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigRectangle() && f2.mark == GetRegMarkFigCircle()) {
        return RectCircOut(ofst, static_cast<FigRectangle&>(f1), static_cast<FigCircle&>(f2));
    }
    else {
        cerr << "MmRectCircSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика круга с треугольником
void MmCircTrianSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigCircle() && f2.mark == GetRegMarkFigTriangle()) {
        return CircTrianOut(ofst, static_cast<FigCircle&>(f1), static_cast<FigTriangle&>(f2));
    }
    else {
        cerr << "MmCircTrianSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика круга с прямоугольником
void MmCircRectSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigCircle() && f2.mark == GetRegMarkFigRectangle()) {
        return CircRectOut(ofst, static_cast<FigCircle&>(f1), static_cast<FigRectangle&>(f2));
    }
    else {
        cerr << "MmCircRectSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика двух кругов
void MmCircCircSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigCircle() && f2.mark == GetRegMarkFigCircle()) {
        return CircCircOut(ofst, static_cast<FigCircle&>(f1), static_cast<FigCircle&>(f2));
    }
    else {
        cerr << "MmCircCircSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

//------------------------------------------------------------------------------
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
        // Регистрация функций, используемых в мультиметоде
        multimethodFunc[GetRegMarkFigTriangle()][GetRegMarkFigCircle()] = MmTrianCircSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigTriangle() << "][" << GetRegMarkFigCircle() << "] = MmTrianCircSpecOut" << endl;

        multimethodFunc[GetRegMarkFigRectangle()][GetRegMarkFigCircle()] = MmRectCircSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigRectangle() << "][" << GetRegMarkFigCircle() << "] = MmRectCircSpecOut" << endl;

        multimethodFunc[GetRegMarkFigCircle()][GetRegMarkFigTriangle()] = MmCircTrianSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigCircle() << "][" << GetRegMarkFigTriangle() << "] = MmCircTrianSpecOut" << endl;

        multimethodFunc[GetRegMarkFigCircle()][GetRegMarkFigRectangle()] = MmCircRectSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigCircle() << "][" << GetRegMarkFigRectangle() << "] = MmCircRectSpecOut" << endl;

        multimethodFunc[GetRegMarkFigCircle()][GetRegMarkFigCircle()] = MmCircCircSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigCircle() << "][" << GetRegMarkFigCircle() << "] = MmCircCircSpecOut" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register trianRegisterPerimeter("Registration of: Extended combinations of Triangle, Rectangle, Circle in  Multimethod");
}
