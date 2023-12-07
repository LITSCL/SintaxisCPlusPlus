#include <iostream>

using namespace std;

int d_switch() { //d_switch

	int numero_1 = 10;

	switch (numero_1) { //Valor a tomar en consideración.
		case 7: //Si el valor a tomar en consideración es igual a 7, se ejecuta el código.
			cout << "Se ejecutó el primer case" << endl;
			break;
		case 8: //Si el valor a tomar en consideración es igual a 8, se ejecuta el código.
			cout << "Se ejecutó el segundo case" << endl;
			break;
		case 9: //Si el valor a tomar en consideración es igual a 9, se ejecuta el código.
			cout << "Se ejecutó el tercer case" << endl;
			break;
		case 10: //Si el valor a tomar en consideración es igual a 10, se ejecuta el código.
			cout << "Se ejecutó el cuarto case" << endl;
			break;
		default: //Si ningun case resulta, se ejecuta el código del default.
			cout << "Se ejecutó el default" << endl;
			break;
	}

	return 0;

}
