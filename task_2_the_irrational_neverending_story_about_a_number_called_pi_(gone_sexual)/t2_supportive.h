#include <inttypes.h>
#include <vector>
//~ #include <gmpxx.h>
using namespace std;

class pi{
	public:
	
	/**
	* Gives us a pi
	*
	* This is the calculation of pi according
	* to a Nilakantha series.
	*
	* @param number until which the cycle continues.
	* @return pi.
	*/
	
	static double nilakantha(uint64_t input){
		//~ mpz_class pi("3");
		double pi = 3.0;
		bool sign = 1;
		for(uint64_t i = 4; i < input; i += 2){
			//~ std::cout << (double)((sign)?1.0:(-1.0))*(4.0 / ((i - 2) * (i - 1) * i)) << std::endl;
			if(sign++){
					pi += (double)(4.0 / ((i - 2) * (i - 1) * i));
				}else{
					pi -= (double)(4.0 / ((i - 2) * (i - 1) * i));
				}
			//~ pi += (double)((sign++)?1.0:(-1.0))*(4.0 / ((i - 2) * (i - 1) * i));
			//~ std::cout << pi << std::endl;
			}
		return pi;
		}
	
	/**
	* Gives us a pi
	*
	* This is the calculation of pi according
	* to a Leibniz series.
	*
	* @param primary numbers.
	* @return pi.
	*/
	
	static double leibniz(vector<uint32_t> input){
		double pi = 1;
		bool sign = 0;
		for(uint i : input){
			
			if(sign){
					pi += (double)(1.0 / i);
				}else{
					pi -= (double)(1.0 / i);
				}
			//~ std::cout << pi << " "<< i << std::endl;
			sign = !sign;
			}
		return pi*4;
		}
};
