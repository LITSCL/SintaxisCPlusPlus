#include <iostream>

using namespace std;

int f_bucle_do_while() { //f_bucle_do_while

	int numero_1 = 0;
	int numero_2 = 20;

	do {
		cout << numero_1 << endl;
		numero_1++; //La variable numero1 se incrementa en una unidad.
	} while (numero_1 < numero_2);

	return 0;

}
