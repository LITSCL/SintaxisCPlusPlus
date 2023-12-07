#include <iostream>

using namespace std;

int e_double_a_float() { //e_double_a_float

	double numero_double = 10; //Se declara e inicia la variable de tipo double.

	float numero_float = static_cast<float>(numero_double); //Se refunde el dato de tipo double a int.

	cout << numero_float;

	return 0;

}
