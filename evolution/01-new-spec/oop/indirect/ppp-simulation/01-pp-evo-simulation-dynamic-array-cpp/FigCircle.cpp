// FigCircle.cpp - Реализация функций, осуществляющих обработку круга

#include <iostream>
#include "FigCircle.h"

namespace {
    // Признак, зарегистрированный для данной фигуры (вместо глобальной переменной)
    int regMark = -1;
}

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigCircle() {
    return regMark;
}

namespace {
    // Класс, обеспечивающий регистрацию данной фигуры-специализации
    class RegFigCircle {
    public:
        RegFigCircle(const char* regInfo) {
            cout << regInfo << endl;
            regMark = GetSpecNumAndIncrement();
            cout << "    FigCircle was registered using number " << regMark << endl;
        }
    };

    RegFigCircle regFigCircle("Registration of: FigCircle");
}

//------------------------------------------------------------------------------
//  Функции используемые для обработки круга как специализации фигуры

// Инициализация существующей фигуры-круга
void Init(FigCircle& fc, int r) {
    fc.mark = GetRegMarkFigCircle();
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

// Ввод специализации фигуры-круга из потока
void In(ifstream &ifst, FigCircle& fc) {
    Circle& c = fc.c;
    In(ifst, c);
}

// Вывод специализации фигуры-круга в поток
void Out(ofstream &ofst, FigCircle& fc) {
    ofst << "Circle is as Specialization of Figure: r = " << fc.c.r << endl;
}

// Удаление специализации фигуры-круга
void DeleteFigCircle(FigCircle* pfc) {
    delete pfc;
}


//=============================================================================
// Функции - оболочки, используемые для параметризации данной специализации,
// Регистрируемые в соответствующих параметрических массивах
//=============================================================================
namespace {
    // Создание фигуры-круга как обобщенной фигуры по совпадению маркера из файла
    Figure* CreateFigCircleUseFileMark(int fileMark) {
        if(fileMark == 3) {
            // Создается круг-специализация
            FigCircle* pfc = CreateFigCircle();
            return  pfc;
        }
        return 0;
    }

    // Регистрация функции создания фигуры-круга как обобщенной фигуры по совпадению маркера из файла
    class RegCreateFigCircleUseFileMark {
    public:
        RegCreateFigCircleUseFileMark(const char* regInfo);
    };

    RegCreateFigCircleUseFileMark::RegCreateFigCircleUseFileMark(const char* regInfo) {
        cout << regInfo << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[GetRegMarkFigCircle()] = CreateFigCircleUseFileMark;
        cout << "    createFigureUseFileMark[" << GetRegMarkFigCircle() << "] = CreateFigCircleUseFileMark" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegCreateFigCircleUseFileMark regCreateFigCircleUseFileMark("Registration of CreateFigCircleUseFileMark");
}

namespace {
    // Ввод специализации фигуры-круга из потока как фигуры
    void InFigCircleValue(ifstream &ifst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigCircle()) {
            In(ifst, static_cast<FigCircle&>(f));
        }
        else {
            cerr << "InFigCircle: Incorrect convertion Figure to FigCircle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-круга из потока как фигуры.
    class RegInFigCircleValue {
    public:
        RegInFigCircleValue(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции ввода значений круга-специализации
            inFigureValue[GetRegMarkFigCircle()] = InFigCircleValue;
            cout << "    inFigureValue[" << GetRegMarkFigCircle() << "] = InFigCircleValue" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegInFigCircleValue regInFigCircleValue("Registration of InFigCircleValue");
}

namespace {
    // Вывод специализации фигуры-круга в поток как фигуры
    void OutFigCircle(ofstream &ofst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigCircle()) {
            Out(ofst, static_cast<FigCircle&>(f));
        }
        else {
            cerr << "OutFigCircle: Incorrect convertion Figure to FigCircle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-круга из потока как фигуры.
    class RegOutFigCircle {
    public:
        RegOutFigCircle(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров круга-специализации
            outFigure[GetRegMarkFigCircle()] = OutFigCircle;
            cout << "    outFigure[" << GetRegMarkFigCircle() << "] = OutFigCircle" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegOutFigCircle regOutFigCircle("Registration of OutFigCircle");
}

namespace {
    // Удаление специализации фигуры-круга как обобщенной фигуры
    void DeleteFigCircleSkin(Figure* pf) {
        // Проверка на всякий случай
        if(pf->mark == GetRegMarkFigCircle()) {
            DeleteFigCircle(static_cast<FigCircle*>(pf));
        }
        else {
            cerr << "DeleteFigCircleSkin: Incorrect convertion Figure to FigCircle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-круга из потока как фигуры.
    class RegDeleteFigCircleSkin {
    public:
        RegDeleteFigCircleSkin(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров круга-специализации
            deleteFigure[GetRegMarkFigCircle()] = DeleteFigCircleSkin;
            cout << "    outFigure[" << GetRegMarkFigCircle() << "] = DeleteFigCircleSkin" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegDeleteFigCircleSkin regDeleteFigCircleSkin("Registration of DeleteFigCircleSkin");
}
