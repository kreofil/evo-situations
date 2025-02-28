/////////////////////////////////////////////
// This file was generated by O2M compiler //
/////////////////////////////////////////////

#ifndef O2M_H_FILE_container
#define O2M_H_FILE_container
#include "_O2M_sys.h"
#include "c:\prog\O2M\Import\In.h"
#include "c:\prog\O2M\Import\Out.h"
#include "c:\prog\O2M\Import\FileIO.h"
#include "figure.h"
#include "figureProc.h"
namespace container {
struct cont;
typedef cont Pcont;
struct cont;
struct cont {
	virtual const char* O2M_SYS_ID() {return "cont@container";};
	int size;
	figure::Pfig* fig[100];
};
//PROCEDURE New
Pcont* New();
//PROCEDURE Init
void Init(cont* c);
//PROCEDURE AddFigure
void AddFigure(cont* c, figure::Pfig* f);
//PROCEDURE Input
void Input(cont* c);
//PROCEDURE FileInput
int FileInput(FileIO::TFile* inFile, cont* c);
//PROCEDURE Output
void Output(cont* c);
//PROCEDURE FileOutput
void FileOutput(FileIO::TFile* outFile, cont* c);
//MODULE INITIALIZATION
void O2M_SYS_container();
}
#endif
