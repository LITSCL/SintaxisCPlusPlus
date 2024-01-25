#include <iostream>

using namespace std;

int h_float_a_double() { //h_float_a_double

	float numero_float = 10.f; //Se declara e inicia la variable de tipo float.

	double numero_double = static_cast<double>(numero_float); //Se refunde el dato de tipo float a double.

	cout << numero_double;

	return 0;

}
