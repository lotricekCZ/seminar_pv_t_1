//~ #include
#include <iostream>
#include <vector>
#include <thread>
#include <future>
//~ #include <gmpxx.h>
#define min(a, b) (a < b ? a :b)
#include "../task_1_primary_numbers_dividors/t1_supportive.h"
//~ #include "t2_supportive.h"
#include <inttypes.h>

template <typename T, typename S>
void insert_sort(T *(array), S size){
	for (auto i = 0; i < size - 1; i++) {
        auto j = i + 1;
        T temp = array[j];
        while (j > 0 && temp < array[j-1]) {
            array[j] = array[j-1];
            j--;
			}
        array[j] = temp;
		}
		//~ std::cout << std::endl << size << std::endl;
		//~ std::cout << std::endl;
	
	}

int main(int argc, char *argv[]){
	auto start = std::chrono::steady_clock::now();
	int32_t pole[] = {1, 4, 6, 8, 2, 9, 5, 2, 1, 5};
	insert_sort(pole, sizeof(pole) / sizeof(pole[0]));
	for(auto i = 0; i < sizeof(pole) / sizeof(pole[0]); i++){
		std::cout << pole[i] << std::endl;
		}
	
	auto end = std::chrono::steady_clock::now();
	std::chrono::duration<double> elapsed_seconds = end - start;
	std::cout << "elapsed time: " << elapsed_seconds.count() << "s\n";
	}
