#include <iostream>

using namespace std;

int g_float_a_int() { //g_float_a_int

	float numero_float = 10; //Se declara e inicia la variable de tipo float.

	int numero_int = static_cast<int>(numero_float); //Se refunde el dato de tipo float a int.

	cout << numero_int;

	return 0;

}
