///////////////////////////////////////////////
// This file was generated by Link2M utility //
///////////////////////////////////////////////

//CASE "fig" declared in module "figure"
namespace rectangle {struct rect;}
namespace triangle {struct trian;}
namespace circle {struct circ;}
namespace figure {
struct fig {
	int O2M_SID;
	void (*O2M_FREE)(fig*);
	fig() : O2M_SID(0), O2M_FREE(0) {}
	fig(void (*O2M_PFUNC)(fig*)) {O2M_PFUNC(this);}
	~fig() {if (O2M_FREE) O2M_FREE(this);}
	union {
		rectangle::rect* O2M_SPEC_rectangle_rect;
		triangle::trian* O2M_SPEC_triangle_trian;
		circle::circ* O2M_SPEC_circle_circ;
	};
	//<rectangle_rect>
	static const int O2M_SID_rectangle_rect;
	static void O2M_INIT_rectangle_rect(fig*);
	static void O2M_FREE_rectangle_rect(fig*);
	//<triangle_trian>
	static const int O2M_SID_triangle_trian;
	static void O2M_INIT_triangle_trian(fig*);
	static void O2M_FREE_triangle_trian(fig*);
	//<circle_circ>
	static const int O2M_SID_circle_circ;
	static void O2M_INIT_circle_circ(fig*);
	static void O2M_FREE_circle_circ(fig*);
};}

//COMMON PROCEDURE "Perimeter" declared in module "figure"
void* O2M_COMMON_figure_Perimeter(figure::fig* p0);

//COMMON PROCEDURE "Output" declared in module "figure"
void* O2M_COMMON_figure_Output(figure::fig* p0);

//COMMON PROCEDURE "FileOutput" declared in module "figure"
void* O2M_COMMON_figure_FileOutput(figure::fig* p0);

