// FigRectangle.cpp - Реализация функций, осуществляющих обработку прямоугольника

#include "FigRectangle.h"

//------------------------------------------------------------------------------
//  Функции используемые для обработки прямоугольника как специализации фигуры

// Инициализация существующей фигуры-прямоугольника
void Init(FigRectangle& fr, int x, int y) {
    fr.mark = rectangleMark;
    Rectangle& r = fr.r;
    Init(r, x, y);
}

// Создание фигуры-прямоугольника без инициализации сторон
FigRectangle* CreateFigRectangle() {
    FigRectangle* pfr = new FigRectangle;
    Init(*pfr, 0, 0);
    return pfr;
}

// Создание фигуры-прямоугольника с инициализаций сторон
FigRectangle* CreateFigRectangleAndInit(int x, int y) {
    FigRectangle* pfr = CreateFigRectangle();
    Init(*pfr, x, y);
    return pfr;
}

// Создание фигуры-прямоугольника как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigRectangleUseFileMark(int fileMark) {
    if(fileMark == 1) {
        // Создается прямоугольник-специализация
        FigRectangle* pfr = CreateFigRectangle();
        return  pfr;
    }
    return 0;
}


//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод специализации фигуры-прямоугольника из потока
void In(ifstream &ifst, FigRectangle& fr) {
    Rectangle& r = fr.r;
    In(ifst, r);
}

// Вывод специализации фигуры-прямоугольника в поток
void Out(ofstream &ofst, FigRectangle& fr) {
    ofst << "Rectangle is as Specialization of Figure: x = " << fr.r.x << ", y = " << fr.r.y << endl;
}

// Функции - оболочки, используемые для параметризации данной специализации
#include <iostream>

// Ввод специализации фигуры-прямоугольника из потока как фигуры
void InFigRectangleValue(ifstream &ifst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == rectangleMark) {
        In(ifst, static_cast<FigRectangle&>(f));
    }
    else {
        cerr << "InFigRectangle: Incorrect convertion Figure to FigRectangle" << endl;
        throw; // Exeption;
    }
}

// Вывод специализации фигуры-прямоугольника в поток как фигуры
void OutFigRectangle(ofstream &ofst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == rectangleMark) {
        Out(ofst, static_cast<FigRectangle&>(f));
    }
    else {
        cerr << "OutFigRectangle: Incorrect convertion Figure to FigRectangle" << endl;
        throw; // Exeption;
    }
}

// Организация регистрации функций, обеспечивающих процедурно-параметрический полиморфизм
namespace {
    // Класс, обеспечивающий формирование нужных связей в своем конструкторе.
    class Register {
    public:
        Register(const char* regInfo);
    };

    Register::Register(const char* regInfo) {
        cout << regInfo << endl;
        figuresCounter++;
        cout << "FigRectangle was registered using number " << figuresCounter << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[rectangleMark] = CreateFigRectangleUseFileMark;
        cout << "    createFigureUseFileMark[" << rectangleMark << "] = CreateFigRectangleUseFileMark" << endl;
        // Регистрация функции ввода значений прямоугольника-специализации
        inFigureValue[rectangleMark] = InFigRectangleValue;
        //inFigureValueCounter++;
        cout << "    inFigureValue[" << rectangleMark << "] = InFigRectangleValue" << endl;
        // Регистрация функции вывода параметров прямоугольника-специализации
        outFigure[rectangleMark] = OutFigRectangle;
        // outFigureCounter++;
        cout << "    outFigure[" << rectangleMark << "] = OutFigRectangle" << endl;
    }


    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register rectanRegister("Registration of: CreateFigRectangleUseFileMark, InFigRectangleValue, OutFigRectangle");
}
