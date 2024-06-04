// FigColorDecorator.cpp - Реализация функций, осуществляющих обработку декоратора

#include "FigColorDecorator.h"

//------------------------------------------------------------------------------
//  Функции используемые для обработки декоратора как специализации фигуры

// Инициализация существующей фигуры-декоратора
void Init(FigColorDecorator& fcd, string color, Figure* pf) {
    fcd.mark = colorDecoratorMark;
    fcd.color = color;
    fcd.pf = pf;
}

// Создание фигуры-декоратора без инициализации сторон
FigColorDecorator* CreateFigColorDecorator() {
    FigColorDecorator* pfcd = new FigColorDecorator;
    Init(*pfcd, "", 0);
    return pfcd;
}

// Создание фигуры-декоратора с инициализаций сторон
FigColorDecorator* CreateFigColorDecoratorAndInit(string color, Figure* pf) {
    FigColorDecorator* pfcd = CreateFigColorDecorator();
    Init(*pfcd, color, pf);
    return pfcd;
}

// Создание фигуры-декоратора как обобщенной фигуры по совпадению маркера из файла
Figure* CreateFigColorDecoratorUseFileMark(int fileMark) {
    if(fileMark == 13) {
        // Создается декоратор-специализация
        FigColorDecorator* pfc = CreateFigColorDecorator();
        return  pfc;
    }
    return 0;
}

//#include <fstream> - присутствуют в подключаемых файлах
//using namespace std;

// Ввод специализации фигуры-декоратора из потока  и следующей за ней фигуры
void In(ifstream &ifst, FigColorDecorator& fcd) {
    ifst >> fcd.color;
    // После этого из файла вводится фигура, которая цепляется за декоратор
    fcd.pf = InFigure(ifst);
}

// Вывод специализации фигуры-декоратора в поток
void Out(ofstream &ofst, FigColorDecorator& fcd) {
    ofst << "Colored Figure:" << endl;
    ofst << "    ";
    OutFigure(ofst, *(fcd.pf));
    ofst << "    Color is " << fcd.color << endl;
}

// Функции - оболочки, используемые для параметризации данной специализации
#include <iostream>

// Ввод специализации фигуры-декоратора из потока как фигуры
void InFigColorDecoratorValue(ifstream &ifst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == colorDecoratorMark) {
        In(ifst, static_cast<FigColorDecorator&>(f));
    }
    else {
        cerr << "InFigColorDecorator: Incorrect convertion Figure to FigColorDecorator" << endl;
        throw; // Exeption;
    }
}

// Вывод специализации фигуры-декоратора в поток как фигуры
void OutFigColorDecorator(ofstream &ofst, Figure& f) {
    // Проверка на всякий случай
    if(f.mark == colorDecoratorMark) {
        Out(ofst, static_cast<FigColorDecorator&>(f));
    }
    else {
        cerr << "OutFigColorDecorator: Incorrect convertion Figure to FigColorDecorator" << endl;
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
        cout << "FigColorDecorator was registered using number " << figuresCounter << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[colorDecoratorMark] = CreateFigColorDecoratorUseFileMark;
        cout << "    createFigureUseFileMark[" << colorDecoratorMark << "] = CreateFigColorDecoratorUseFileMark" << endl;
        // Регистрация функции ввода значений декоратора-специализации
        inFigureValue[colorDecoratorMark] = InFigColorDecoratorValue;
        //inFigureValueCounter++;
        cout << "    inFigureValue[" << colorDecoratorMark << "] = InFigColorDecoratorValue" << endl;
        // Регистрация функции вывода параметров декоратора-специализации
        outFigure[colorDecoratorMark] = OutFigColorDecorator;
        //outFigureCounter++;
        cout << "    outFigure[" << colorDecoratorMark << "] = OutFigColorDecorator" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    Register circRegister("Registration of: CreateFigColorDecorator, InFigColorDecoratorValue, OutFigColorDecorator");
}
