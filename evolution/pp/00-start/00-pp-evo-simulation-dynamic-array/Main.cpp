//------------------------------------------------------------------------------
// main.cpp - содержит главную функцию (клиентскую часть программы), 
// обеспечивающую использование разработанных программных объектов и функций
//------------------------------------------------------------------------------

#include <iostream>
using namespace std;

#include "Container.h"

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

    ClearContainer(c);

    ofst << "Empty container. " << endl;
    Out(ofst, c);

    cout << "Stop"<< endl;
    return 0;
}