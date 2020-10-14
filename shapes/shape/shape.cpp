
float shape::get_property(float property, bool diagnose){
	if (!diagnose)
		(cout << property << endl);
	return property;
	}

float shape::get_circuit(){
	return get_property(circuit);
	}

float shape::get_area(){
	return get_property(area);
	}
