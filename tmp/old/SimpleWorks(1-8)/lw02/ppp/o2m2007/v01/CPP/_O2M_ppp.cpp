///////////////////////////////////////////////
// This file was generated by Link2M utility //
///////////////////////////////////////////////

#include "rectangle.h"
#include "c:\prog\O2M\Import\In.h"
#include "c:\prog\O2M\Import\Out.h"
#include "c:\prog\O2M\Import\FileIO.h"
#include "triangle.h"
#include "figure.h"
#include "circle.h"
#include "addFigureCirc.h"

//figure.fig<rectangle_rect>
const int figure::fig::O2M_SID_rectangle_rect = 1;

void figure::fig::O2M_INIT_rectangle_rect(fig* O2M_PCASE)
{
	O2M_PCASE->O2M_SPEC_rectangle_rect = new rectangle::rect;
	O2M_PCASE->O2M_FREE = O2M_FREE_rectangle_rect;
	O2M_PCASE->O2M_SID = O2M_SID_rectangle_rect;
}

void figure::fig::O2M_FREE_rectangle_rect(fig* O2M_PCASE)
{
	delete O2M_PCASE->O2M_SPEC_rectangle_rect;
}

//figure.fig<triangle_trian>
const int figure::fig::O2M_SID_triangle_trian = 2;

void figure::fig::O2M_INIT_triangle_trian(fig* O2M_PCASE)
{
	O2M_PCASE->O2M_SPEC_triangle_trian = new triangle::trian;
	O2M_PCASE->O2M_FREE = O2M_FREE_triangle_trian;
	O2M_PCASE->O2M_SID = O2M_SID_triangle_trian;
}

void figure::fig::O2M_FREE_triangle_trian(fig* O2M_PCASE)
{
	delete O2M_PCASE->O2M_SPEC_triangle_trian;
}

//figure.fig<circle_circ>
const int figure::fig::O2M_SID_circle_circ = 3;

void figure::fig::O2M_INIT_circle_circ(fig* O2M_PCASE)
{
	O2M_PCASE->O2M_SPEC_circle_circ = new circle::circ;
	O2M_PCASE->O2M_FREE = O2M_FREE_circle_circ;
	O2M_PCASE->O2M_SID = O2M_SID_circle_circ;
}

void figure::fig::O2M_FREE_circle_circ(fig* O2M_PCASE)
{
	delete O2M_PCASE->O2M_SPEC_circle_circ;
}

//COMMON PROCEDURE "Perimeter" declared in module "figure"
void* O2M_COMMON_figure_Perimeter(figure::fig* p0)
{
	if (p0->O2M_SID_rectangle_rect == p0->O2M_SID) return (void*)figure::O2M_HANDLER_Perimeter_0;
	if (p0->O2M_SID_triangle_trian == p0->O2M_SID) return (void*)figure::O2M_HANDLER_Perimeter_1;
	if (p0->O2M_SID_circle_circ == p0->O2M_SID) return (void*)addFigureCirc::O2M_HANDLER_Perimeter_0;
	return 0;
}

//COMMON PROCEDURE "Output" declared in module "figure"
void* O2M_COMMON_figure_Output(figure::fig* p0)
{
	if (p0->O2M_SID_rectangle_rect == p0->O2M_SID) return (void*)figure::O2M_HANDLER_Output_2;
	if (p0->O2M_SID_triangle_trian == p0->O2M_SID) return (void*)figure::O2M_HANDLER_Output_3;
	if (p0->O2M_SID_circle_circ == p0->O2M_SID) return (void*)addFigureCirc::O2M_HANDLER_Output_1;
	return 0;
}

//COMMON PROCEDURE "FileOutput" declared in module "figure"
void* O2M_COMMON_figure_FileOutput(figure::fig* p0)
{
	if (p0->O2M_SID_rectangle_rect == p0->O2M_SID) return (void*)figure::O2M_HANDLER_FileOutput_4;
	if (p0->O2M_SID_triangle_trian == p0->O2M_SID) return (void*)figure::O2M_HANDLER_FileOutput_5;
	if (p0->O2M_SID_circle_circ == p0->O2M_SID) return (void*)addFigureCirc::O2M_HANDLER_FileOutput_2;
	return 0;
}
