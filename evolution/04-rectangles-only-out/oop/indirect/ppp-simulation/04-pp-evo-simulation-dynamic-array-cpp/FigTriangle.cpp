// FigTriangle.cpp - Реализация функций, осуществляющих обработку треугольника

#include <iostream>
#include "FigTriangle.h"

namespace {
    // Признак, зарегистрированный для данной фигуры (вместо глобальной переменной)
    int regMark = -1;
}

// Функция возвращающая значение признака для зарегистрированной фигуры
int GetRegMarkFigTriangle() {
    return regMark;
}

namespace {
    // Класс, обеспечивающий регистрацию данной фигуры-специализации
    class RegFigTriangle {
    public:
        RegFigTriangle(const char* regInfo) {
            cout << regInfo << endl;
            regMark = GetSpecNumAndIncrement();
            cout << "    FigTriangle was registered using number " << regMark << endl;
        }
    };

    RegFigTriangle regFigTriangle("Registration of: FigTriangle");
}

//------------------------------------------------------------------------------
//  Функции используемые для обработки треугольника как специализации фигуры

// Инициализация существующей фигуры-треугольника
void Init(FigTriangle& ft, int a, int b, int c) {
    ft.mark = GetRegMarkFigTriangle();
    Triangle& t = ft.t;
    Init(t, a, b, c);
}

// Создание фигуры-треугольника без инициализации сторон
FigTriangle* CreateFigTriangle() {
    FigTriangle* pft = new FigTriangle;
    Init(*pft, 0, 0, 0);
    return pft;
}

// Создание фигуры-треугольника с инициализаций сторон
FigTriangle* CreateFigTriangleAndInit(int a, int b, int c) {
    FigTriangle* pft = CreateFigTriangle();
    Init(*pft, a, b, c);
    return pft;
}

// Ввод специализации фигуры-треугольника из потока
void In(ifstream &ifst, FigTriangle& ft) {
    Triangle& t = ft.t;
    In(ifst, t);
}

// Вывод специализации фигуры-треугольника в поток
void Out(ofstream &ofst, FigTriangle& ft) {
    ofst << "Triangle is as Specialization of Figure: a = " << ft.t.a 
         << ", b = " << ft.t.b << ", c = " << ft.t.c << endl;
}

// Удаление специализации фигуры-треугольника
void DeleteFigTriangle(FigTriangle* pft) {
    delete pft;
}

//=============================================================================
// Функции - оболочки, используемые для параметризации данной специализации,
// Регистрируемые в соответствующих параметрических массивах
//=============================================================================
namespace {
    // Создание фигуры-треугольника как обобщенной фигуры по совпадению маркера из файла
    Figure* CreateFigTriangleUseFileMark(int fileMark) {
        if(fileMark == 2) {
            // Создается треугольник-специализация
            FigTriangle* pft = CreateFigTriangle();
            return  pft;
        }
        return 0;
    }

    // Регистрация функции создания фигуры-треугольника как обобщенной фигуры по совпадению маркера из файла
    class RegCreateFigTriangleUseFileMark {
    public:
        RegCreateFigTriangleUseFileMark(const char* regInfo);
    };

    RegCreateFigTriangleUseFileMark::RegCreateFigTriangleUseFileMark(const char* regInfo) {
        cout << regInfo << endl;
        // Регистрация функции создания фигуры по маркеру файла
        createFigureUseFileMark[GetRegMarkFigTriangle()] = CreateFigTriangleUseFileMark;
        cout << "    createFigureUseFileMark[" << GetRegMarkFigTriangle() << "] = CreateFigTriangleUseFileMark" << endl;
    }

    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegCreateFigTriangleUseFileMark regCreateFigTriangleUseFileMark("Registration of CreateFigTriangleUseFileMark");
}

namespace {
    // Ввод специализации фигуры-треугольника из потока как фигуры
    void InFigTriangleValue(ifstream &ifst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigTriangle()) {
            In(ifst, static_cast<FigTriangle&>(f));
        }
        else {
            cerr << "InFigTriangle: Incorrect convertion Figure to FigTriangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-треугольника из потока как фигуры.
    class RegInFigTriangleValue {
    public:
        RegInFigTriangleValue(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции ввода значений треугольника-специализации
            inFigureValue[GetRegMarkFigTriangle()] = InFigTriangleValue;
            cout << "    inFigureValue[" << GetRegMarkFigTriangle() << "] = InFigTriangleValue" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegInFigTriangleValue regInFigTriangleValue("Registration of InFigTriangleValue");
}

namespace {
    // Вывод специализации фигуры-треугольника в поток как фигуры
    void OutFigTriangle(ofstream &ofst, Figure& f) {
        // Проверка на всякий случай
        if(f.mark == GetRegMarkFigTriangle()) {
            Out(ofst, static_cast<FigTriangle&>(f));
        }
        else {
            cerr << "OutFigTriangle: Incorrect convertion Figure to FigTriangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-треугольника из потока как фигуры.
    class RegOutFigTriangle {
    public:
        RegOutFigTriangle(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров треугольника-специализации
            outFigure[GetRegMarkFigTriangle()] = OutFigTriangle;
            cout << "    outFigure[" << GetRegMarkFigTriangle() << "] = OutFigTriangle" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegOutFigTriangle regOutFigTriangle("Registration of OutFigTriangle");
}

namespace {
    // Удаление специализации фигуры-треугольника как обобщенной фигуры
    void DeleteFigTriangleSkin(Figure* pf) {
        // Проверка на всякий случай
        if(pf->mark == GetRegMarkFigTriangle()) {
            DeleteFigTriangle(static_cast<FigTriangle*>(pf));
        }
        else {
            cerr << "DeleteFigTriangleSkin: Incorrect convertion Figure to FigTriangle" << endl;
            throw; // Exeption;
        }
    }

    // Регистратор функции ввода специализации фигуры-треугольника из потока как фигуры.
    class RegDeleteFigTriangleSkin {
    public:
        RegDeleteFigTriangleSkin(const char* regInfo) {
            cout << regInfo << endl;
            // Регистрация функции вывода параметров треугольника-специализации
            deleteFigure[GetRegMarkFigTriangle()] = DeleteFigTriangleSkin;
            cout << "    outFigure[" << GetRegMarkFigTriangle() << "] = DeleteFigTriangleSkin" << endl;
        }
    };
    // Объект, обеспечивающий регистрацию необходимых обработчиков специализаций
    RegDeleteFigTriangleSkin regDeleteFigTriangleSkin("Registration of DeleteFigTriangleSkin");
}
