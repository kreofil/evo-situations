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
    if(f1.mark == triangleMark && f2.mark == circleMark) {
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
    if(f1.mark == rectangleMark && f2.mark == circleMark) {
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
    if(f1.mark == circleMark && f2.mark == triangleMark) {
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
    if(f1.mark == circleMark && f2.mark == rectangleMark) {
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
    if(f1.mark == circleMark && f2.mark == circleMark) {
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
        multimethodFunc[triangleMark][circleMark] = MmTrianCircSpecOut;
        cout << "    multimethodFunc[" << triangleMark << "][" << circleMark << "] = MmTrianCircSpecOut" << endl;

        multimethodFunc[rectangleMark][circleMark] = MmRectCircSpecOut;
        cout << "    multimethodFunc[" << rectangleMark << "][" << circleMark << "] = MmRectCircSpecOut" << endl;

        multimethodFunc[circleMark][triangleMark] = MmCircTrianSpecOut;
        cout << "    multimethodFunc[" << circleMark << "][" << triangleMark << "] = MmCircTrianSpecOut" << endl;

        multimethodFunc[circleMark][rectangleMark] = MmCircRectSpecOut;
        cout << "    multimethodFunc[" << circleMark << "][" << rectangleMark << "] = MmCircRectSpecOut" << endl;

        multimethodFunc[circleMark][circleMark] = MmCircCircSpecOut;
        cout << "    multimethodFunc[" << circleMark << "][" << circleMark << "] = MmCircCircSpecOut" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register trianRegisterPerimeter("Registration of: Extended combinations of Triangle, Rectangle, Circle in  Multimethod");
}
