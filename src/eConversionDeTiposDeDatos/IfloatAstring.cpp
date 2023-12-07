#include <iostream>
#include <string>

using namespace std;

int i_float_a_string() { //i_float_a_string

	float numero_float = 10; //Se declara e inicia la variable de tipo float.

	string numero_string = to_string(numero_float); //Se refunde el dato de tipo float a string.

	cout << numero_string;

	return 0;

}
