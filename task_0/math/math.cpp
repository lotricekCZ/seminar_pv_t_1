

double math::n_mult(int16_t n){
	/* int32_t n_mult(int16_t n)
	 * 		returns something I may call 
	 * 		factorial as it multiplicates 
	 * 		numbers in range of 1 → n or n → -1
	 */
	double ret = 1; 													/*	that dude whose ass 
																			might be stretched 
																			as far as 7.25742e+306
																			before it says its infinite
																		*/
	//~ std::cout << n << std::endl;
	for(int16_t i = ((n >= 0)? 0: n+1); i  != ((n >= 0)? n: 1); i++){ 	// loop condition
		ret *= (i+((n >= 0)? 1: -1));									// loop body
		}
		
	return ret; // return statement
	
	}
	
double math::n_mult_simple(uint8_t n){
	
	double ret = 1; 													
	
	for(uint8_t i = 0; i < n; i++){ 	// loop condition
		ret *= i+1;						// loop body, note that +1 is needed, else it'll always return 0
		}
				
	return ret; 						// return statement
	}
	
int32_t math::n_sum(int16_t n){
	
	int32_t ret = 0; 													
	
	for(int16_t i = 0; i < n; i++){ 	// loop condition
		ret += i+1;						// loop body, note that +1 is needed, else it'll always return 0
		}
				
	return ret; 						// return statement
	}

uint32_t math::n_fib(uint16_t n){
	
	uint32_t ret = 0; 													
	uint32_t ret_1 = 0; 													
	uint32_t ret_2 = 1; 													
	
	for(int16_t i = 2; i <= n; i++){ 	// loop condition
		ret = ret_1 + ret_2;			// loop body, note that +1 is needed, else it'll always return 0
		ret_1 = ret_2;
		ret_2 = ret;
		}
				
	return ret; 						// return statement
	}


