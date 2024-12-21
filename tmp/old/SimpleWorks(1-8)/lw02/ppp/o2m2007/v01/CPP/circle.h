/////////////////////////////////////////////
// This file was generated by O2M compiler //
/////////////////////////////////////////////

#ifndef O2M_H_FILE_circle
#define O2M_H_FILE_circle
#include "_O2M_sys.h"
#include "c:\prog\O2M\Import\In.h"
#include "c:\prog\O2M\Import\Out.h"
#include "c:\prog\O2M\Import\FileIO.h"
#include "figure.h"
namespace circle {
struct circ;
typedef circ Pcirc;
struct circ;
struct circ {
	virtual const char* O2M_SYS_ID() {return "circ@circle";};
	int r;
};
//PROCEDURE New
Pcirc* New(int r);
//PROCEDURE Init
void Init(circ* c, int r);
//PROCEDURE Perimeter
double Perimeter(circ* c);
//PROCEDURE Input
void Input(circ* c);
//PROCEDURE Output
void Output(circ* c);
//PROCEDURE FileInput
void FileInput(FileIO::TFile* inFile, circ* c);
//PROCEDURE FileOutput
void FileOutput(FileIO::TFile* outFile, circ* c);
//MODULE INITIALIZATION
void O2M_SYS_circle();
}
#endif