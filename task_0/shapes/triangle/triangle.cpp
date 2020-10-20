
void triangle::calc_area(){
	area = get_circuit(1) / 2.0;
	}
	
void triangle::calc_circuit(){
	circuit = 0;
	
	for (uint16_t i = 0; i < sizeof(lines)/sizeof(lines[0]); i++){
		//~ cout << i << " len " << lines[i].lenght << endl;
		circuit += lines[i].lenght;
		}
		//~ cout << circuit << endl;
	}

float triangle::get_circuit(bool diagnose){
	if (!diagnose)
		(cout << "triangle circ ");
	return get_property(circuit, diagnose);
	}

float triangle::get_area(bool diagnose){
	if (!diagnose)
		(cout << "triangle area ");
	return get_property(area, diagnose);
	}
