//------------------------------------------------------------------------------
// container_In.cpp - содержит процедуру
// ввода фигур в контейнер
//------------------------------------------------------------------------------

#include <iostream>
#include "container_atd.h"

//------------------------------------------------------------------------------

using namespace std;

namespace simple_shapes {

//------------------------------------------------------------------------------

  // Сигнатуры требуемых функций можно тоже подключить через
  // заголовочный файл. Но, для простоты, можно и так описать.
  shape *In();

//------------------------------------------------------------------------------

  // Ввод содержимого контейнера
  void In(container &c) {
    cout
      << "Do you want to input next shape (yes=\'y\', no=other character)? "
      << endl;
    char k;
    cin >> k;
    while(k == 'y')
    {
      cout << c.len << ": ";
      if((c.cont[c.len] = In()) != 0)
      {
        c.len++;
      }

      cout
        << "Do you want to input next shape (yes=\'y\', no=other character)? "
        << endl;
      cin >> k;
    }
  }

//------------------------------------------------------------------------------

} // end simple_shapes namespace
