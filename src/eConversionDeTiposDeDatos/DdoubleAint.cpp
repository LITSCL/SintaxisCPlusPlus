#include <iostream>

using namespace std;

int d_double_a_int() { //d_double_a_int

	double numero_double = 10; //Se declara e inicia la variable de tipo double.

	int numero_int = static_cast<int>(numero_double); //Se refunde el dato de tipo double a int.

	cout << numero_int;

	return 0;

}
