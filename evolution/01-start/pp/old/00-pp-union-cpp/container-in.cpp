//==============================================================================
// container-in.cpp - содержит процедуру
// ввода фигур в контейнер из потока
//==============================================================================

#include <fstream>
#include "container.h"

//------------------------------------------------------------------------------
// Сигнатуры требуемых функций можно тоже подключить через
// заголовочный файл. Но, для простоты, можно и так описать.
shape *In(std::ifstream &ifdt);

//------------------------------------------------------------------------------
// Ввод содержимого контейнера из указанного потока
void In(container &c, std::ifstream &ifst) {
  while(!ifst.eof())  {
    if((c.cont[c.len] = In(ifst)) != 0) {
      c.len++;
    }
  }
}