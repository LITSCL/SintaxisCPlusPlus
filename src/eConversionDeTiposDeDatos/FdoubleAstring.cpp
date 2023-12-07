#include <iostream>

using namespace std;

int f_double_a_string() { //f_double_a_string

	double numero_double = 10; //Se declara e inicia la variable de tipo double.

	string numero_string = to_string(numero_double); //Se refunde el dato de tipo double a string.

	cout << numero_string;

	return 0;

}
