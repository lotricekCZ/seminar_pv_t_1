#ifndef SHAPES_SHAPE_H
#define SHAPES_SHAPE_H
#include <inttypes.h>


struct line{
	
	/* this struct serves a pur... forget 
	 * about it, for now I only wanted 
	 * to make it look cool */
	float lenght = 2;
	};

class shape{
	private:
		line lines[1];
		float circuit = 0;
		float area = 0;
	public:
		virtual void calc_area(){}
		virtual void calc_circuit(){}
		float get_property(float property, bool diagnose = 0);
		float get_circuit();
		float get_area();
	};
	
#include "shape.cpp"



#endif
