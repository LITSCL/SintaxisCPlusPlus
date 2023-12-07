#include <iostream>
#include <string>

using namespace std;

int l_string_a_float() { //l_string_a_float

	string numero_string = "10"; //Se declara e inicia la variable de tipo string.

	float numero_float = stof(numero_string); //Se refunde el dato de tipo string a float.

	cout << numero_float;

	return 0;

}
