//~ #include
#include <iostream>
#include <vector>
#include <thread>
#include <future>
//~ #include <gmpxx.h>
#define min(a, b) (a < b ? a :b)
#include "../task_1_primary_numbers_dividors/t1_supportive.h"
#include "t2_supportive.h"

int main(int argc, char *argv[]){
	auto start = std::chrono::steady_clock::now();
	
	std::cout << pi::leibniz(get_primars(60)) << std::endl;
	
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
	}
