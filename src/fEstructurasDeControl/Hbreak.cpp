#include <iostream>

using namespace std;

int h_break() { //h_break

	int numero_1 = 0;
	int numero_2 = 20;

	cout << "Bucle while" << endl;
	while (numero_1 < numero_2) { //Repite mientras numero1 sea menor que numero2.

		if (numero_1 == 10) {
			break; //Al leer esta instrucción el programa se sale del bucle.
		}

		cout << numero_1 << endl;
		numero_1++; //La variable numero1 se incrementa en una unidad.
	}

	numero_1 = 0;
	numero_2 = 20;

	cout << "Bucle do while" << endl;
	do {

		if (numero_1 == 10) {
			break; //Al leer esta instrucción el programa se sale del bucle.
		}

		cout << numero_1 << endl;
		numero_1++; //La variable numero1 se incrementa en una unidad.
	} while (numero_1 < numero_2);

	cout << "Bucle for" << endl;
	for (int i = 0; i < 20; i++) { //La variable i empieza en 0, se repite mientras sea menor que 20 y en cada iteración se incrementa en una unidad la variable i.

		if (i == 10) {
			break; //Al leer esta instrucción el programa se sale del bucle.
		}

		cout << i << endl;
	}

	return 0;

}
