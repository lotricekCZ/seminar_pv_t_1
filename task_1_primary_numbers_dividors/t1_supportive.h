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
	
std::vector<uint> get_primars(uint input = 666){
	std::vector<uint> primes = {};
	for(uint i = 2; i < input; i++){
		if(is_primary(get_dividors(i))){
			primes.push_back(i);
			}
		}
	return primes;
	}

std::vector<uint> dissassemble(uint input = 666){
	uint remain = input;
	std::vector<uint> rozklad;
	std::vector<uint> primes = get_primars(99999);
	for(uint prime: primes){
		std::cout << prime << ", " << std::endl;
		while(remain % prime == 0){
			remain /= prime;
			rozklad.push_back(prime);
			std::cout << prime << ", ";
			}
		}
		std::cout << std::endl;
	return rozklad;
	}
