#ifndef MATH_MATH_H
#define MATH_MATH_H
#include <inttypes.h>

namespace personal{
	
class math{
	public:
	static double n_mult(int16_t n);
	static double n_mult_simple(uint8_t n);
	static int32_t n_sum(int16_t n);
	static uint32_t n_fib(uint16_t n);
	};
	
#include "math.cpp"

};

#endif
