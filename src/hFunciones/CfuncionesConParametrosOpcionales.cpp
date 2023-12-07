#include <iostream>

using namespace std;

//Declarando la función con un parámetro.
void mostrar_numero(int numero = 1) {
    cout << numero << endl;
}

int c_funciones_con_parametros_opcionales() { //c_funciones_con_parametros_opcionales

	mostrar_numero(); //Llamando la función sin entregar el parámetro.
	mostrar_numero(999); //Llamando la función entregando el parámetro.

	return 0;

}
