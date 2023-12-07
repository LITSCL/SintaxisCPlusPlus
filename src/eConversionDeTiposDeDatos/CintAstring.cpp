#include <iostream>
#include <string>

using namespace std;

int c_int_a_string() { //c_int_a_string

	int numero_int = 10; //Se declara e inicia la variable de tipo int.

	string numero_string = to_string(numero_int); //Se refunde el dato de tipo int a string.

	cout << numero_string;

	return 0;

}
