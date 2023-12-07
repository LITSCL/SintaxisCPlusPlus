#include <iostream>
#include <string>

using namespace std;

int j_string_a_int() { //j_string_a_int

	string numero_string = "10"; //Se declara e inicia la variable de tipo string.

	int numero_int = stoi(numero_string); //Se refunde el dato de tipo string a int.

	cout << numero_int;

	return 0;

}
