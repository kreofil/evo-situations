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
    if(f1.mark == triangleMark && f2.mark == triangleMark) {
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
    if(f1.mark == triangleMark && f2.mark == rectangleMark) {
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
    if(f1.mark == rectangleMark && f2.mark == triangleMark) {
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
    if(f1.mark == rectangleMark && f2.mark == rectangleMark) {
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
        multimethodFunc[triangleMark][triangleMark] = MmTrianTrianSpecOut;
        cout << "    multimethodFunc[" << triangleMark << "][" << triangleMark << "] = MmTrianTrianSpecOut" << endl;
        multimethodFunc[triangleMark][rectangleMark] = MmTrianRectSpecOut;
        cout << "    multimethodFunc[" << triangleMark << "][" << rectangleMark << "] = MmTrianRectSpecOut" << endl;
        multimethodFunc[rectangleMark][triangleMark] = MmRectTrianSpecOut;
        cout << "    multimethodFunc[" << rectangleMark << "][" << triangleMark << "] = MmRectTrianSpecOut" << endl;
        multimethodFunc[rectangleMark][rectangleMark] = MmRectRectSpecOut;
        cout << "    multimethodFunc[" << rectangleMark << "][" << rectangleMark << "] = MmRectRectSpecOut" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register trianRegisterPerimeter("Registration of: Different combination of Triangle and Rectangle in  Multimethod");
}
