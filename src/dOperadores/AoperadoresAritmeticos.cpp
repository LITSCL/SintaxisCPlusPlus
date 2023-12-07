#include <iostream>

using namespace std;

int a_operadores_aritmeticos() { //a_operadores_aritmeticos

	int numero_1 = 10;
	int numero_2 = 15;

	double suma = numero_1 + numero_2;
	cout << "La suma de " << numero_1 << " con " << numero_2 << " es igual a: " << suma << endl;

	double resta = numero_1 - numero_2;
	cout << "La resta de " << numero_1 << " con " << numero_2 << " es igual a: " << resta << endl;

	double multiplicacion = numero_1 * numero_2;
	cout << "La multiplicación de " << numero_1 << " con " << numero_2 << " es igual a: " << multiplicacion << endl;

	double division = numero_1 / numero_2;
	cout << "La división de " << numero_1 << " con " << numero_2 << " es igual a: " << division << endl;

	int modulo = numero_1%numero_2;
	cout << "El módulo de " << numero_1 << " con " << numero_2 << " es igual a: " << modulo << endl;

	return 0;

}
