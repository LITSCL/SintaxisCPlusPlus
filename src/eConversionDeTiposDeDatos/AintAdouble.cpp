#include <iostream>

using namespace std;

int a_int_a_double() { //a_int_a_double

	int numero_int = 10; //Se declara e inicia la variable de tipo int.

	double numero_double = static_cast<double>(numero_int); //Se refunde el dato de tipo int a double.

	cout << numero_double;

	return 0;

}
