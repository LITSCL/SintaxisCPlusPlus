#include <iostream>

using namespace std;

int c_operadores_logicos() { //c_operadores_logicos

	int numero_1 = 10;
	int numero_2 = -5;

	//Operador lógico and (&&).
	cout << "Operador lógico and (&&):" << endl;

	if (numero_1 > 0 && numero_2 < 0) {
		cout << "Ambas condiciones se cumplen" << endl; //Si ambas condiciones se cumplen se ejecuta la instrucción.
	}
	else {
		cout << "Una condición o ambas no se estan cumpliendo" << endl;
	}

	cout << endl;

	//Operador lógico or (||).
	cout << "Operador lógico or (||):" << endl;

	if (numero_1 > 0 || numero_2 < 0) {
		cout << "Una o ambas condiciones se estan cumpliendo" << endl; //Con que una condición se cumpla se ejecuta la instrucción.
	}
	else {
		cout << "Ninguna condición se esta cumpliendo" << endl;
	}

	return 0;

}
