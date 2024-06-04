//==============================================================================
// multimethod.c - содержит функции, опрделяющие реализацию мультиметода
// для чистого процедурного подхода с использованием для фигуры объединения
//==============================================================================

#include <stdio.h>
#include "figure.h"

//------------------------------------------------------------------------------
// Обработчик специализации для двух прямоугольников
void MMRR(Rectangle* r1, Rectangle* r2, FILE* ofst) {
  fprintf(ofst, "Rectangle - Rectangle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для прямоугольника и треугольника
void MMRT(Rectangle* r1, Triangle* t2, FILE* ofst) {
  fprintf(ofst, "Rectangle - Triangle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для прямоугольника и круга
void MMRC(Rectangle* r1, Circle* c2, FILE* ofst) {
  fprintf(ofst, "Rectangle - Circle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для треугольника и прямоугольника
void MMTR(Triangle* t1, Rectangle* r2, FILE* ofst) {
  fprintf(ofst, "Triangle - Rectangle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для двух треугольников
void MMTT(Triangle* t1, Triangle* t2, FILE* ofst) {
  fprintf(ofst, "Triangle - Triangle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для треугольника и круга
void MMTC(Triangle* t1, Circle* c2, FILE* ofst) {
  fprintf(ofst, "Triangle - Circle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для круга и прямоугольника
void MMCR(Circle* c1, Rectangle* r2, FILE* ofst) {
  fprintf(ofst, "Circle - Rectangle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для круга и треугольника
void MMCT(Circle* c1, Triangle* t2, FILE* ofst) {
  fprintf(ofst, "Circle - Triangle Combination\n");
}

//------------------------------------------------------------------------------
// Обработчик специализации для двух кругов
void MMCC(Circle* c1, Circle* c2, FILE* ofst) {
  fprintf(ofst, "Circle - Triangle Combination\n");
}

//------------------------------------------------------------------------------
void Multimethod(Figure* f1, Figure* f2, FILE* ofst) {
  switch(f1->k) {
    case RECTANGLE:
      switch(f2->k) {
        case RECTANGLE:
          MMRR((Rectangle*)f1, (Rectangle*)f2, ofst);
          break;
        case TRIANGLE:
          MMRT((Rectangle*)f1, (Triangle*)f2, ofst);
          break;
        case CIRCLE:
          MMRC((Rectangle*)f1, (Circle*)f2, ofst);
          break;
        default:
          fprintf(ofst, "1st is RECTANGLE. Incorrect key of figure 2 = %d\n", f2->k);
      }
      break;
    case TRIANGLE:
      switch(f2->k) {
        case RECTANGLE:
          MMTR((Triangle*)f1, (Rectangle*)f2, ofst);
          break;
        case TRIANGLE:
          MMTT((Triangle*)f1, (Triangle*)f2, ofst);
          break;
        case CIRCLE:
          MMTC((Triangle*)f1, (Circle*)f2, ofst);
          break;
        default:
          fprintf(ofst, "1st is TRIANGLE. Incorrect key of figure 2 = %d\n", f2->k);
      }
      break;
    case CIRCLE:
      switch(f2->k) {
        case RECTANGLE:
          MMCR((Circle*)f1, (Rectangle*)f2, ofst);
          break;
        case TRIANGLE:
          MMCT((Circle*)f1, (Triangle*)f2, ofst);
          break;
        case CIRCLE:
          MMCC((Circle*)f1, (Circle*)f2, ofst);
          break;
        default:
          fprintf(ofst, "1st is CIRCLE. Incorrect key of figure 2 = %d\n", f2->k);
      }
      break;
    default:
      fprintf(ofst, "Incorrect key of figure 1 = %d\n", f1->k);
  }
}