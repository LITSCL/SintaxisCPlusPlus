#include <iostream>
#include <cmath>
#include <string>

using namespace std;

//Las funciones predefinidas son aquellas que vienen por defecto en C++.

int main() { //h_funciones_predefinidas

	//1. Función "sqrt".
	cout << "---Función 'sqrt'---" << endl;
	cout << sqrt(25) << endl; //Devuelve la raíz cuadrada de un número.
	cout << "--------------------------" << endl;

	cout << endl;

	//2. Función "pow".
	cout << "---Función 'pow'---" << endl;
	cout << pow(2, 3) << endl; //Devuelve el resultado de elevar un número a una potencia.
	cout << "--------------------------" << endl;

	cout << endl;

	//3. Función "length".
	cout << "---Función 'length'---" << endl;
	string texto = "Hola Mundo";
	cout << texto.length() << endl; //Devuelve la cantidad de caracteres de una cadena de texto.
	cout << "--------------------------" << endl;

	return 0;

}
