#include <iostream>
using namespace std;


#include "./math/math.h"
#include "./shapes/triangle/triangle.h"

using namespace personal;

line tri_lines[3] = {{3}, {4}, {5}};


int main(){
	triangle a(tri_lines);
	a.get_area();
	a.get_circuit();
	cout << personal::math::n_mult(-5) << endl; 
	cout << personal::math::n_mult_simple(5) << endl;
	cout << personal::math::n_sum(4) << endl;
	cout << personal::math::n_fib(6) << endl;
	
	return 0;
	}

