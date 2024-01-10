#include <iostream>

using namespace std;

int b_condicional_elseif() { //b_condicional_elseif

	//NOTA: Utilizar la condición IF sin corchetes (Forma 2), solo funciona cuando existe una única instrucción.

	int numero_1 = 13;
	int numero_2 = 12;
	int numero_3 = 11;
	int numero_4 = 10;

	//1. Condicion ELSE IF (Forma 1).
	if (numero_1 < numero_4) { //Se evalúa la primera condición
		cout << "La primera condición se cumple" << endl; //Si la condición se cumplió, se ejecuta el código y se ignoran las demas condiciones, de no ser asi, se procede a evaluar la proxima condición.
	}
	else if (numero_1 < numero_3) {
		cout << "La segunda condición se cumple" << endl;
	}
	else if (numero_1 < numero_2) {
		cout << "La tercera condición se cumple" << endl;
	}
	else {
		cout << "Ninguna condición se cumplió" << endl; //Si ninguna condición se cumplió, se ejecuta esta instrucción.
	}

	//2. Condicion ELSE IF (Forma 2).
	if (numero_1 < numero_4) //Se evalúa la primera condición.
		cout << "La primera condición se cumple" << endl; //Si la condición se cumplió, se ejecuta el código y se ignoran las demas condiciones, de no ser asi, se procede a evaluar la proxima condición.
	else if (numero_1 < numero_3)
		cout << "La segunda condición se cumple" << endl;
	else if (numero_1 < numero_2)
		cout << "La tercera condición se cumple" << endl;
	else
		cout << "Ninguna condición se cumplió" << endl; //Si ninguna condición se cumplió, se ejecuta esta instrucción.

	return 0;

}
