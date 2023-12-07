#include <iostream>

using namespace std;

int b_int_a_float() { //b_int_a_float

	int numero_int = 10; //Se declara e inicia la variable de tipo int.

	float numero_float = static_cast<float>(numero_int); //Se refunde el dato de tipo int a float.

	cout << numero_float;

	return 0;

}
