//------------------------------------------------------------------------------
// main.cpp - содержит главную функцию (клиентскую часть программы), 
// обеспечивающую использование разработанных программных объектов и функций
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "Container.h"

//================================================================================
// Изменение клиентского кода, обусловленного добавлением новой функциональности
//------------------------------------------------------------------------------
// Тестовая функция обеспечивающая вычисление периметров всех фигур,
// Размещенных в контейнере.
// Задается с использованием прототипа только для требуемой функции
void FigurePerimeterTestOut(ofstream& ofst, Container& c);
//================================================================================


//------------------------------------------------------------------------------
int main(int argc, char* argv[])
{
    if(argc !=3) {
        cout << "incorrect command line! Wated: command infile outfile" << endl;
        return 1;
    }
    ifstream ifst(argv[1]);
    ofstream ofst(argv[2]);


    cout << "Start"<< endl;

    Container c;
    Init(c);
    In(ifst, c);

    ofst << "Filled container. " << endl;
    Out(ofst, c);

    ofst << "Figures Perimeters:" << endl;
    FigurePerimeterTestOut(ofst, c);

    ClearContainer(c);

    ofst << "Empty container. " << endl;
    Out(ofst, c);

    cout << "Stop"<< endl;
    return 0;
}