/////////////////////////////////////////////
// This file was generated by O2M compiler //
/////////////////////////////////////////////

#ifndef O2M_H_FILE_rectangle
#define O2M_H_FILE_rectangle
#include "_O2M_sys.h"
#include "c:\prog\O2M\Import\In.h"
#include "c:\prog\O2M\Import\Out.h"
#include "c:\prog\O2M\Import\FileIO.h"
namespace rectangle {
struct rect;
typedef rect Prect;
struct rect;
struct rect {
	virtual const char* O2M_SYS_ID() {return "rect@rectangle";};
	int x;
	int y;
};
//PROCEDURE New
Prect* New(int x, int y);
//PROCEDURE Init
void Init(rect* r, int x, int y);
//PROCEDURE Perimeter
double Perimeter(rect* r);
//PROCEDURE Input
void Input(rect* r);
//PROCEDURE Output
void Output(rect* r);
//PROCEDURE FileInput
void FileInput(FileIO::TFile* inFile, rect* r);
//PROCEDURE FileOutput
void FileOutput(FileIO::TFile* outFile, rect* r);
//MODULE INITIALIZATION
void O2M_SYS_rectangle();
}
#endif
