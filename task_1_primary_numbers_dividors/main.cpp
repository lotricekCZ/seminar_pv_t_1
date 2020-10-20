//~ #include
#include <iostream>
#include <vector>
#include <thread>
#include <future>
#define min(a, b) (a < b ? a :b)

typedef unsigned int uint;
using namespace std;

void get_dividor(std::vector<uint> * root_vector, uint input, uint start = 0, uint stop = -1){
	for(uint i = start; i <= stop; i++){
		if(input % i == 0){
			root_vector -> push_back(i);
			}
		}
	}

bool is_primary(std::vector<uint> dividors){
	return dividors.size() <= 2;
	}

std::vector<uint> get_dividors(uint input = 666){
	std::vector<uint> dividors = {};	
	for(uint i = 1; i <= input; i++){
		if(input % i == 0){
			dividors.push_back(i);
			}
		}
		
	return dividors;
	}

int main(int argc, char *argv[]){
	auto start = std::chrono::steady_clock::now();
	
	std::vector<uint> dividors = get_dividors(argc != 1? atoi(argv[1]): 1024);
	
	for(uint v: dividors){
		std::cout << v << std::endl;
		}
	
	std::cout << (is_primary(dividors)? "Je to prvocislo": "neni to prvocislo") << std::endl;
	
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
	}
