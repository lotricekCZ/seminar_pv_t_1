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

bool is_primary(int num){
	int numberOfDividors = 0;
	for(int i = 2; i <= num; i++){
		if(num % i == 0){
			numberOfDividors++;
			}
		}
	return numberOfDividors > 1;
	}

std::vector<uint> get_dividors(uint input = 666){
	std::vector<uint> dividors = {};
	uint th = 16;
	std::cout << "vlaken: " << th + 1;
	std::vector<std::future<void>> threads;
	
	if(input > (1 << 20)){
		//~ std::cout << "hyperenter" << std::endl;
		for(uint i = 0; i < th+1; i++){
			std::async(get_dividor, &dividors, input, input/th*i+1, min(input/th*(i+1), input));
			}
		}
		
	else{
			
		for(uint i = 1; i <= input; i++){
			if(input % i == 0){
				dividors.push_back(i);
				}
			}
		}
	return dividors;
	}

int main(int argc, char *argv[]){
	auto start = std::chrono::steady_clock::now();
	
	for(int v: get_dividors((argc != 0? atoi(argv[1]): 1024))){
		std::cout << v << std::endl;
		}
		
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
	}
