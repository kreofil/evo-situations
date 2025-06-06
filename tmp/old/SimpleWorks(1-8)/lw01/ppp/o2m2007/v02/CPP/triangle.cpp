/////////////////////////////////////////////
// This file was generated by O2M compiler //
/////////////////////////////////////////////

//MODULE triangle;
#include "triangle.h"
using namespace triangle;

//IMPORT
//In
//Out
//FileIO

//VAR

/////////////////////////////////////////////
//PROCEDURE New
Ptrian* triangle::New(int a, int b, int c) {
	Ptrian* O2M_RESULT;
//VAR
Ptrian* tmp;
//BEGIN
	tmp = new(Ptrian);
	tmp->a = a;
	tmp->b = b;
	tmp->c = c;
	O2M_RESULT = tmp;
	goto O2M_RETURN;
	O2M_RETURN:;
	return O2M_RESULT;
}
//END New;

/////////////////////////////////////////////
//PROCEDURE Init
void triangle::Init(trian* t, int a, int b, int c) {
//VAR
//BEGIN
	t->a = a;
	t->b = b;
	t->c = c;
}
//END Init;

/////////////////////////////////////////////
//PROCEDURE Perimeter
double triangle::Perimeter(trian* t) {
	double O2M_RESULT;
//VAR
//BEGIN
	O2M_RESULT = t->a + t->b + t->c;
	goto O2M_RETURN;
	O2M_RETURN:;
	return O2M_RESULT;
}
//END Perimeter;

/////////////////////////////////////////////
//PROCEDURE Input
void triangle::Input(trian* t) {
//VAR
//BEGIN
	Out::String((char*)"a = ", 5);
	In::Int(t->a);
	Out::String((char*)"b = ", 5);
	In::Int(t->b);
	Out::String((char*)"c = ", 5);
	In::Int(t->c);
}
//END Input;

/////////////////////////////////////////////
//PROCEDURE Output
void triangle::Output(trian* t) {
//VAR
//BEGIN
	Out::String((char*)"Triangle: a = ", 15);
	Out::Int(t->a, 0);
	Out::String((char*)", b = ", 7);
	Out::Int(t->b, 0);
	Out::String((char*)", c = ", 7);
	Out::Int(t->c, 0);
	Out::String((char*)",   perimemter = ", 18);
	Out::Real(Perimeter(t), 0);
	Out::Ln();
}
//END Output;

/////////////////////////////////////////////
//PROCEDURE FileInput
void triangle::FileInput(FileIO::TFile* inFile, trian* t) {
//VAR
int f;
//BEGIN
	f = inFile->ReadInt(t->a);
	f = inFile->ReadInt(t->b);
	f = inFile->ReadInt(t->c);
}
//END FileInput;

/////////////////////////////////////////////
//PROCEDURE FileOutput
void triangle::FileOutput(FileIO::TFile* outFile, trian* t) {
//VAR
int flag;
//BEGIN
	flag = outFile->WriteString((char*)"Triangle: a = ", 15);
	flag = outFile->WriteInt(t->a, 7);
	flag = outFile->WriteString((char*)", b = ", 7);
	flag = outFile->WriteInt(t->b, 7);
	flag = outFile->WriteString((char*)", c = ", 7);
	flag = outFile->WriteInt(t->c, 7);
	flag = outFile->WriteString((char*)",   perimemter = ", 18);
	flag = outFile->WriteReal(Perimeter(t), 7);
	flag = outFile->Ln();
}
//END FileOutput;

/////////////////////////////////////////////
//MODULE INITIALIZATION
void triangle::O2M_SYS_triangle() {
	//imports initialisation
	static bool O2M_SYS_was_started(false);
	if (O2M_SYS_was_started) return;
	O2M_SYS_was_started = true;
	In::O2M_SYS_In();
	Out::O2M_SYS_Out();
	FileIO::O2M_SYS_FileIO();
//BEGIN
}
//END triangle.
