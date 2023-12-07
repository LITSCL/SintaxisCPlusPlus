#include <iostream>

using namespace std;

int e_bucle_while() { //e_bucle_while

	int numero_1 = 0;
	int numero_2 = 20;

	while (numero_1 < numero_2) { //Repite mientras numero1 sea menor que numero2.
		cout << numero_1 << endl;
		numero_1++; //La variable numero1 se incrementa en una unidad.
	}

	return 0;

}
