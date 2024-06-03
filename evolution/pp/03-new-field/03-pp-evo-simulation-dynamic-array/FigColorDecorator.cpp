// FigColorDecorator.cpp - Реализация функций, осуществляющих обработку декоратора

#include <iostream>
#include "FigColorDecorator.h"

namespace {
    // Признак, зарегистрированный для данной фигуры (вместо глобальной переменной)
    int regMark = -1;
}

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigColorDecorator() {
    return regMark;
}

namespace {
    // Класс, обеспечивающий регистрацию данной фигуры-специализации
    class RegFigColorDecorator {
    public:
        RegFigColorDecorator(const char* regInfo) {
            cout << regInfo << endl;
            regMark = GetSpecNumAndIncrement();
            cout << "    FigColorDecorator was registered using number " << regMark << endl;
        }
    };

    RegFigColorDecorator regFigColorDecorator("Registration of: FigColorDecorator");
}

//------------------------------------------------------------------------------
//  Функции используемые для обработки декоратора как специализации фигуры

// Инициализация существующей фигуры-декоратора
void Init(FigColorDecorator& fcd, string color, Figure* pf) {
    fcd.mark = GetRegMarkFigColorDecorator();
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


// Удаление специализации фигуры-декоратора
void DeleteFigColorDecorator(FigColorDecorator* pfcd) {
    delete pfcd;
}

//=============================================================================
// Функции - оболочки, используемые для параметризации данной специализации,
// Регистрируемые в соответствующих параметрических массивах
//=============================================================================
namespace {
    // Создание фигуры-декоратора как обобщенной фигуры по совпадению маркера из файла
    Figure* CreateFigColorDecoratorUseFileMark(int fileMark) {
        if(fileMark == 13) {
            // Создается декоратор-специализация
            FigColorDecorator* pfcd = CreateFigColorDecorator();
            return  pfcd;
        }
        return 0;
    }

    // Регистрация функции создания фигуры-декоратора как обобщенной фигуры по совпадению маркера из файла
    class RegCreateFigColorDecoratorUseFileMark {
    public:
        RegCreateFigColorDecoratorUseFileMark(const char* regInfo);
    };

    RegCreateFigColorDecoratorUseFileMark::RegCreateFigColorDecoratorUseFileMark(const char* regInfo) {
        cout << regInfo << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[GetRegMarkFigColorDecorator()] = CreateFigColorDecoratorUseFileMark;
        cout << "    createFigureUseFileMark[" << GetRegMarkFigColorDecorator() << "] = CreateFigColorDecoratorUseFileMark" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegCreateFigColorDecoratorUseFileMark regCreateFigColorDecoratorUseFileMark("Registration of CreateFigColorDecoratorUseFileMark");
}

namespace {
    // Ввод специализации фигуры-декоратора из потока как фигуры
    void InFigColorDecoratorValue(ifstream &ifst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigColorDecorator()) {
            In(ifst, static_cast<FigColorDecorator&>(f));
        }
        else {
            cerr << "InFigColorDecorator: Incorrect convertion Figure to FigColorDecorator" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-декоратора из потока как фигуры.
    class RegInFigColorDecoratorValue {
    public:
        RegInFigColorDecoratorValue(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции ввода значений декоратора-специализации
            inFigureValue[GetRegMarkFigColorDecorator()] = InFigColorDecoratorValue;
            cout << "    inFigureValue[" << GetRegMarkFigColorDecorator() << "] = InFigColorDecoratorValue" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegInFigColorDecoratorValue regInFigColorDecoratorValue("Registration of InFigColorDecoratorValue");
}

namespace {
    // Вывод специализации фигуры-декоратора в поток как фигуры
    void OutFigColorDecorator(ofstream &ofst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigColorDecorator()) {
            Out(ofst, static_cast<FigColorDecorator&>(f));
        }
        else {
            cerr << "OutFigColorDecorator: Incorrect convertion Figure to FigColorDecorator" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-декоратора из потока как фигуры.
    class RegOutFigColorDecorator {
    public:
        RegOutFigColorDecorator(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров декоратора-специализации
            outFigure[GetRegMarkFigColorDecorator()] = OutFigColorDecorator;
            cout << "    outFigure[" << GetRegMarkFigColorDecorator() << "] = OutFigColorDecorator" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegOutFigColorDecorator regOutFigColorDecorator("Registration of OutFigColorDecorator");
}

namespace {
    // Удаление специализации фигуры-декоратора как обобщенной фигуры
    void DeleteFigColorDecoratorSkin(Figure* pf) {
        // Проверка на всякий случай
        if(pf->mark == GetRegMarkFigColorDecorator()) {
            DeleteFigColorDecorator(static_cast<FigColorDecorator*>(pf));
        }
        else {
            cerr << "DeleteFigColorDecoratorSkin: Incorrect convertion Figure to FigColorDecorator" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-декоратора из потока как фигуры.
    class RegDeleteFigColorDecoratorSkin {
    public:
        RegDeleteFigColorDecoratorSkin(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров декоратора-специализации
            deleteFigure[GetRegMarkFigColorDecorator()] = DeleteFigColorDecoratorSkin;
            cout << "    outFigure[" << GetRegMarkFigColorDecorator() << "] = DeleteFigColorDecoratorSkin" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegDeleteFigColorDecoratorSkin regDeleteFigColorDecoratorSkin("Registration of DeleteFigColorDecoratorSkin");
}
