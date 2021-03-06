//~ #include
#include <iostream>
#include <vector>
#include <thread>
#include <future>
#define min(a, b) (a < b ? a :b)

#include "t1_supportive.h"

int main(int argc, char *argv[]){
	auto start = std::chrono::steady_clock::now();
	
	std::vector<uint> dividors = get_dividors(argc != 1? atoi(argv[1]): 1024);
	
	for(uint v: dividors){
		std::cout << v << std::endl;
		}
	
	std::cout << (is_primary(dividors)? "Je to prvocislo": "neni to prvocislo") << std::endl;
	dissassemble(argc != 1? atoi(argv[1]): 1024);
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
	}
