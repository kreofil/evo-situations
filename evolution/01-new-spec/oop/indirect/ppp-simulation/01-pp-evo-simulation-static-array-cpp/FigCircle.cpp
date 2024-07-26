// FigCircle.cpp - Реализация функций, осуществляющих обработку круга

#include "FigCircle.h"

//------------------------------------------------------------------------------
//  Функции используемые для обработки круга как специализации фигуры

// Инициализация существующей фигуры-круга
void Init(FigCircle& fc, int r) {
    fc.mark = circleMark;
    Circle& c = fc.c;
    Init(c, r);
}

// Создание фигуры-круга без инициализации сторон
FigCircle* CreateFigCircle() {
    FigCircle* pfc = new FigCircle;
    Init(*pfc, 0);
    return pfc;
}

// Создание фигуры-круга с инициализаций сторон
FigCircle* CreateFigCircleAndInit(int r) {
    FigCircle* pfc = CreateFigCircle();
    Init(*pfc, r);
    return pfc;
}

// Создание фигуры-круга как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigCircleUseFileMark(int fileMark) {
    if(fileMark == 3) {
        // Создается круг-специализация
        FigCircle* pfc = CreateFigCircle();
        return  pfc;
    }
    return 0;
}

//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод специализации фигуры-круга из потока
void In(ifstream &ifst, FigCircle& fc) {
    Circle& c = fc.c;
    In(ifst, c);
}

// Вывод специализации фигуры-круга в поток
void Out(ofstream &ofst, FigCircle& fc) {
    ofst << "Circle is as Specialization of Figure: r = " << fc.c.r << endl;
}

// Функции - оболочки, используемые для параметризации данной специализации
#include <iostream>

// Ввод специализации фигуры-круга из потока как фигуры
void InFigCircleValue(ifstream &ifst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == circleMark) {
        In(ifst, static_cast<FigCircle&>(f));
    }
    else {
        cerr << "InFigCircle: Incorrect convertion Figure to FigCircle" << endl;
        throw; // Exeption;
    }
}

// Вывод специализации фигуры-круга в поток как фигуры
void OutFigCircle(ofstream &ofst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == circleMark) {
        Out(ofst, static_cast<FigCircle&>(f));
    }
    else {
        cerr << "OutFigCircle: Incorrect convertion Figure to FigCircle" << endl;
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
        cout << "FigCircle was registered using number " << figuresCounter << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[circleMark] = CreateFigCircleUseFileMark;
        cout << "    createFigureUseFileMark[" << circleMark << "] = CreateFigCircleUseFileMark" << endl;
        // Регистрация функции ввода значений круга-специализации
        inFigureValue[circleMark] = InFigCircleValue;
        //inFigureValueCounter++;
        cout << "    inFigureValue[" << circleMark << "] = InFigCircleValue" << endl;
        // Регистрация функции вывода параметров круга-специализации
        outFigure[circleMark] = OutFigCircle;
        //outFigureCounter++;
        cout << "    outFigure[" << circleMark << "] = OutFigCircle" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register circRegister("Registration of: CreateFigCircle, InFigCircleValue, OutFigCircle");
}
