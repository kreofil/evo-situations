/////////////////////////////////////////////
// This file was generated by O2M compiler //
/////////////////////////////////////////////

//MODULE figureProc;
#include "figureProc.h"
using namespace figureProc;

//IMPORT
//In
//Out
//FileIO
//figure
//rectangle
//triangle

//VAR

/////////////////////////////////////////////
//PROCEDURE Input
figure::Pfig* figureProc::Input() {
	figure::Pfig* O2M_RESULT;
//VAR
int tag;
figure::Pfig* pf;
rectangle::rect r;
triangle::trian t;
typedef figure::fig O2M_UNNM_pfr;
O2M_UNNM_pfr* pfr;
typedef figure::fig O2M_UNNM_pft;
O2M_UNNM_pft* pft;
//BEGIN
	Out::String((char*)"Input figure tag (1 - rectangle; 2 - triangle; else - NIL): ", 61);
	Out::Ln();
	In::Int(tag);
	if(tag == 1) {
		pfr = new O2M_UNNM_pfr(O2M_UNNM_pfr::O2M_INIT_rectangle_rect);
		rectangle::Input(&r);
		pfr->O2M_SPEC_rectangle_rect->x = r.x;
		pfr->O2M_SPEC_rectangle_rect->y = r.y;
		pf = pfr;
	} else
	if(tag == 2) {
		pft = new O2M_UNNM_pft(O2M_UNNM_pft::O2M_INIT_triangle_trian);
		triangle::Input(&t);
		pft->O2M_SPEC_triangle_trian->a = t.a;
		pft->O2M_SPEC_triangle_trian->b = t.b;
		pft->O2M_SPEC_triangle_trian->c = t.c;
		pf = pft;
	} else {
		pf = 0;
	};
	O2M_RESULT = pf;
	goto O2M_RETURN;
	O2M_RETURN:;
	return O2M_RESULT;
}
//END Input;

/////////////////////////////////////////////
//PROCEDURE FileInput
figure::Pfig* figureProc::FileInput(FileIO::TFile* inFile) {
	figure::Pfig* O2M_RESULT;
//VAR
int flag;
int tag;
figure::Pfig* pf;
rectangle::rect r;
triangle::trian t;
typedef figure::fig O2M_UNNM_pfr;
O2M_UNNM_pfr* pfr;
typedef figure::fig O2M_UNNM_pft;
O2M_UNNM_pft* pft;
//BEGIN
	flag = inFile->ReadInt(tag);
	if(tag == 1) {
		pfr = new O2M_UNNM_pfr(O2M_UNNM_pfr::O2M_INIT_rectangle_rect);
		rectangle::FileInput(inFile, &r);
		pfr->O2M_SPEC_rectangle_rect->x = r.x;
		pfr->O2M_SPEC_rectangle_rect->y = r.y;
		pf = pfr;
	} else
	if(tag == 2) {
		pft = new O2M_UNNM_pft(O2M_UNNM_pft::O2M_INIT_triangle_trian);
		triangle::FileInput(inFile, &t);
		pft->O2M_SPEC_triangle_trian->a = t.a;
		pft->O2M_SPEC_triangle_trian->b = t.b;
		pft->O2M_SPEC_triangle_trian->c = t.c;
		pf = pft;
	} else {
		pf = 0;
	};
	O2M_RESULT = pf;
	goto O2M_RETURN;
	O2M_RETURN:;
	return O2M_RESULT;
}
//END FileInput;

/////////////////////////////////////////////
//MODULE INITIALIZATION
void figureProc::O2M_SYS_figureProc() {
	//imports initialisation
	static bool O2M_SYS_was_started(false);
	if (O2M_SYS_was_started) return;
	O2M_SYS_was_started = true;
	In::O2M_SYS_In();
	Out::O2M_SYS_Out();
	FileIO::O2M_SYS_FileIO();
	figure::O2M_SYS_figure();
	rectangle::O2M_SYS_rectangle();
	triangle::O2M_SYS_triangle();
//BEGIN
}
//END figureProc.
