#ifndef TRIANGLE_TRIANGLE_H
#define TRIANGLE_TRIANGLE_H
#include <inttypes.h>


#include "../shape/shape.h"

class triangle : public shape {
	private:
		line lines[3];
		float circuit = 0;
		float area = 0;
	public:
		void calc_area();
		void calc_circuit();
		float get_circuit(bool diagnose = 0);
		float get_area(bool diagnose = 0);
		void assign_lines(line in_lines[3]){
			for(uint8_t i = 0; i < 3; i++){
				lines[i] = in_lines[i];
				}
			}
		void init(){
			calc_circuit();
			calc_area();
			}
		
		triangle(){
			init();
			}
		triangle(line in_lines[3]){
			assign_lines(in_lines);
			init();
			}
		
	};
	
#include "triangle.cpp"



#endif
