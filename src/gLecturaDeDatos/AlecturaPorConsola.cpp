#include <iostream>

using namespace std;

int a_lectura_por_consola() { //a_lectura_por_consola

	//NOTA: En C++ no es posible leer un dato en la declaración de una variable, el proceso se debe hacer por separado.

	cout << "Ingrese un número" << endl;

	//1. Declarar la variable.
	int lectura = 0;

	//2. Leer el dato y almacenarlo en la variable.
	cin >> lectura;

	//3. Imprimir el dato almacenado en la variable.
	cout << lectura;

	return 0;

}
