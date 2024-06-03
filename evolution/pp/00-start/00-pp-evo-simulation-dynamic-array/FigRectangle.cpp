// FigRectangle.cpp - Реализация функций, осуществляющих обработку прямоугольника

#include <iostream>
#include "FigRectangle.h"

namespace {
    // Признак, зарегистрированный для данной фигуры (вместо глобальной переменной)
    int regMark = -1;
}

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigRectangle() {
    return regMark;
}

namespace {
    // Класс, обеспечивающий регистрацию данной фигуры-специализации
    class RegFigRectangle {
    public:
        RegFigRectangle(const char* regInfo) {
            cout << regInfo << endl;
            regMark = GetSpecNumAndIncrement();
            cout << "    FigRectangle was registered using number " << regMark << endl;
        }
    };

    RegFigRectangle regFigRectangle("Registration of: FigRectangle");
}

//------------------------------------------------------------------------------
//  Функции используемые для обработки прямоугольника как специализации фигуры

// Инициализация существующей фигуры-прямоугольника
void Init(FigRectangle& fr, int x, int y) {
    fr.mark = GetRegMarkFigRectangle();
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

// Ввод специализации фигуры-прямоугольника из потока
void In(ifstream &ifst, FigRectangle& fr) {
    Rectangle& r = fr.r;
    In(ifst, r);
}

// Вывод специализации фигуры-прямоугольника в поток
void Out(ofstream &ofst, FigRectangle& fr) {
    ofst << "Rectangle is as Specialization of Figure: x = " << fr.r.x << ", y = " << fr.r.y << endl;
}

// Удаление специализации фигуры-прямоугольника
void DeleteFigRectangle(FigRectangle* pfr) {
    delete pfr;
}


//=============================================================================
// Функции - оболочки, используемые для параметризации данной специализации,
// Регистрируемые в соответствующих параметрических массивах
//=============================================================================
namespace {
    // Создание фигуры-прямоугольника как обобщенной фигуры по совпадению маркера из файла
    Figure* CreateFigRectangleUseFileMark(int fileMark) {
        if(fileMark == 1) {
            // Создается прямоугольник-специализация
            FigRectangle* pfr = CreateFigRectangle();
            return  pfr;
        }
        return 0;
    }

    // Регистрация функции создания фигуры-прямоугольника как обобщенной фигуры по совпадению маркера из файла
    class RegCreateFigRectangleUseFileMark {
    public:
        RegCreateFigRectangleUseFileMark(const char* regInfo);
    };

    RegCreateFigRectangleUseFileMark::RegCreateFigRectangleUseFileMark(const char* regInfo) {
        cout << regInfo << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[GetRegMarkFigRectangle()] = CreateFigRectangleUseFileMark;
        cout << "    createFigureUseFileMark[" << GetRegMarkFigRectangle() << "] = CreateFigRectangleUseFileMark" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegCreateFigRectangleUseFileMark regCreateFigRectangleUseFileMark("Registration of CreateFigRectangleUseFileMark");
}

namespace {
    // Ввод специализации фигуры-прямоугольника из потока как фигуры
    void InFigRectangleValue(ifstream &ifst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigRectangle()) {
            In(ifst, static_cast<FigRectangle&>(f));
        }
        else {
            cerr << "InFigRectangle: Incorrect convertion Figure to FigRectangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-прямоугольника из потока как фигуры.
    class RegInFigRectangleValue {
    public:
        RegInFigRectangleValue(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции ввода значений прямоугольника-специализации
            inFigureValue[GetRegMarkFigRectangle()] = InFigRectangleValue;
            cout << "    inFigureValue[" << GetRegMarkFigRectangle() << "] = InFigRectangleValue" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegInFigRectangleValue regInFigRectangleValue("Registration of InFigRectangleValue");
}

namespace {
    // Вывод специализации фигуры-прямоугольника в поток как фигуры
    void OutFigRectangle(ofstream &ofst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigRectangle()) {
            Out(ofst, static_cast<FigRectangle&>(f));
        }
        else {
            cerr << "OutFigRectangle: Incorrect convertion Figure to FigRectangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-прямоугольника из потока как фигуры.
    class RegOutFigRectangle {
    public:
        RegOutFigRectangle(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров прямоугольника-специализации
            outFigure[GetRegMarkFigRectangle()] = OutFigRectangle;
            cout << "    outFigure[" << GetRegMarkFigRectangle() << "] = OutFigRectangle" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegOutFigRectangle regOutFigRectangle("Registration of OutFigRectangle");
}

namespace {
    // Удаление специализации фигуры-прямоугольника как обобщенной фигуры
    void DeleteFigRectangleSkin(Figure* pf) {
        // Проверка на всякий случай
        if(pf->mark == GetRegMarkFigRectangle()) {
            DeleteFigRectangle(static_cast<FigRectangle*>(pf));
        }
        else {
            cerr << "DeleteFigRectangleSkin: Incorrect convertion Figure to FigRectangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-прямоугольника из потока как фигуры.
    class RegDeleteFigRectangleSkin {
    public:
        RegDeleteFigRectangleSkin(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров прямоугольника-специализации
            deleteFigure[GetRegMarkFigRectangle()] = DeleteFigRectangleSkin;
            cout << "    outFigure[" << GetRegMarkFigRectangle() << "] = DeleteFigRectangleSkin" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegDeleteFigRectangleSkin regDeleteFigRectangleSkin("Registration of DeleteFigRectangleSkin");
}
