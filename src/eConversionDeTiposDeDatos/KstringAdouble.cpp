#include <iostream>
#include <string>

using namespace std;

int k_string_a_double() { //k_string_a_double

	string numero_string = "10"; //Se declara e inicia la variable de tipo string.

	double numero_double = stod(numero_string); //Se refunde el dato de tipo string a double.

	cout << numero_double;

	return 0;

}
