/////////////////////////////////////////////
// This file was generated by O2M compiler //
/////////////////////////////////////////////

//MODULE addFigureCirc;
#include "addFigureCirc.h"
using namespace addFigureCirc;

//IMPORT
//In
//Out
//FileIO
//figure
//circle

//VAR

/////////////////////////////////////////////
//HANDLER PROCEDURE Perimeter
double addFigureCirc::O2M_HANDLER_Perimeter_0(figure::fig* c) {
	double O2M_RESULT;
//VAR
//BEGIN
	O2M_RESULT = circle::Perimeter(c->O2M_SPEC_circle_circ);
	goto O2M_RETURN;
	O2M_RETURN:;
	return O2M_RESULT;
}
//END Perimeter;

/////////////////////////////////////////////
//HANDLER PROCEDURE Output
void addFigureCirc::O2M_HANDLER_Output_1(figure::fig* c) {
//VAR
//BEGIN
	circle::Output(c->O2M_SPEC_circle_circ);
}
//END Output;

/////////////////////////////////////////////
//HANDLER PROCEDURE FileOutput
void addFigureCirc::O2M_HANDLER_FileOutput_2(FileIO::TFile* outFile, figure::fig* c) {
//VAR
//BEGIN
	circle::FileOutput(outFile, c->O2M_SPEC_circle_circ);
}
//END FileOutput;

/////////////////////////////////////////////
//MODULE INITIALIZATION
void addFigureCirc::O2M_SYS_addFigureCirc() {
	//imports initialisation
	static bool O2M_SYS_was_started(false);
	if (O2M_SYS_was_started) return;
	O2M_SYS_was_started = true;
	In::O2M_SYS_In();
	Out::O2M_SYS_Out();
	FileIO::O2M_SYS_FileIO();
	figure::O2M_SYS_figure();
	circle::O2M_SYS_circle();
//BEGIN
}
//END addFigureCirc.
