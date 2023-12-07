#include <iostream>

using namespace std;

//Una función permite agrupar un bloque de instrucciones, instrucciones las cuales se ejecutan al llamar la función desde su nombre.

//Declarando la función.
void mi_primera_funcion() {
    cout << "Instrucción 1" << endl;
	cout << "Instrucción 2" << endl;
	cout << "Instrucción 3" << endl;
}

int a_funciones() { //a_funciones

	//Llamando la función.
	mi_primera_funcion();

	return 0;

}
