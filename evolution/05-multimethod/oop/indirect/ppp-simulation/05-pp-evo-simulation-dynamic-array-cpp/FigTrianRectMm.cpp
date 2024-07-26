// FigTrianRectMm.cpp - Реализация обработчиков специализаций мультиметода
// для всех комбинаций треугольника и прямоугольника
// сделано в одном файле, но может быть и разнесено

#include "FigTriangle.h"
#include "FigRectangle.h"
#include "FigMm.h"
#include <iostream>

//------------------------------------------------------------------------------
// Функции-обработчики специализаций

//  Обработчик специализации, вычисляющий отношения между двумя треугольниками
void TrianTrianOut(ofstream &ofst, FigTriangle& ft1, FigTriangle& ft2) {
    ofst << "This is two Triangles" << endl;
    ofst << "     ";
    Out(ofst, ft1);
    ofst << "     ";
    Out(ofst, ft2);
}

//  Обработчик специализации, вычисляющий отношения между треугольником и прямоугольником
void TrianRectOut(ofstream &ofst, FigTriangle& ft1, FigRectangle& fr2) {
    ofst << "We have Triangle and Rectangle" << endl;
    ofst << "     ";
    Out(ofst, ft1);
    ofst << "     ";
    Out(ofst, fr2);
}

//  Обработчик специализации, вычисляющий отношения между прямоугольником и треугольником
void RectTrianOut(ofstream &ofst, FigRectangle& fr1, FigTriangle& ft2) {
    ofst << "The first figure is Rectangle and second is Triangle" << endl;
    ofst << "     ";
    Out(ofst, fr1);
    ofst << "     ";
    Out(ofst, ft2);
}

//  Обработчик специализации, вычисляющий отношения между двумя прямоугольниками
void RectRectOut(ofstream &ofst, FigRectangle& fr1, FigRectangle& fr2) {
    ofst << "Rectangle + Rectangle = Two Rectangles" << endl;
    ofst << "     ";
    Out(ofst, fr1);
    ofst << "     ";
    Out(ofst, fr2);
}

//------------------------------------------------------------------------------
// Функции-оболочки над обработчикаи специализаций

// Оболочка вокруг обработчика двух треугольников
void MmTrianTrianSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigTriangle() && f2.mark == GetRegMarkFigTriangle()) {
        return TrianTrianOut(ofst, static_cast<FigTriangle&>(f1), static_cast<FigTriangle&>(f2));
    }
    else {
        cerr << "MmTrianTrianSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика треугольника с прямоугольником
void MmTrianRectSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigTriangle() && f2.mark == GetRegMarkFigRectangle()) {
        return TrianRectOut(ofst, static_cast<FigTriangle&>(f1), static_cast<FigRectangle&>(f2));
    }
    else {
        cerr << "MmTrianRectSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика прямоугольника с треугольником
void MmRectTrianSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigRectangle() && f2.mark == GetRegMarkFigTriangle()) {
        return RectTrianOut(ofst, static_cast<FigRectangle&>(f1), static_cast<FigTriangle&>(f2));
    }
    else {
        cerr << "MmRectTrianSpecOut: Incorrect convertion one of Figures" << endl;
        throw; // Exeption;
    }
}

// Оболочка вокруг обработчика двух прямоугольников
void MmRectRectSpecOut(ofstream& ofst, Figure& f1, Figure& f2) {
    // Проверка на всякий случай
    if(f1.mark == GetRegMarkFigRectangle() && f2.mark == GetRegMarkFigRectangle()) {
        return RectRectOut(ofst, static_cast<FigRectangle&>(f1), static_cast<FigRectangle&>(f2));
    }
    else {
        cerr << "MmRectRectSpecOut: Incorrect convertion one of Figures" << endl;
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
        multimethodFunc[GetRegMarkFigTriangle()][GetRegMarkFigTriangle()] = MmTrianTrianSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigTriangle() << "][" << GetRegMarkFigTriangle() << "] = MmTrianTrianSpecOut" << endl;
        multimethodFunc[GetRegMarkFigTriangle()][GetRegMarkFigRectangle()] = MmTrianRectSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigTriangle() << "][" << GetRegMarkFigRectangle() << "] = MmTrianRectSpecOut" << endl;
        multimethodFunc[GetRegMarkFigRectangle()][GetRegMarkFigTriangle()] = MmRectTrianSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigRectangle() << "][" << GetRegMarkFigTriangle() << "] = MmRectTrianSpecOut" << endl;
        multimethodFunc[GetRegMarkFigRectangle()][GetRegMarkFigRectangle()] = MmRectRectSpecOut;
        cout << "    multimethodFunc[" << GetRegMarkFigRectangle() << "][" << GetRegMarkFigRectangle() << "] = MmRectRectSpecOut" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register trianRegisterPerimeter("Registration of: Different combination of Triangle and Rectangle in  Multimethod");
}
