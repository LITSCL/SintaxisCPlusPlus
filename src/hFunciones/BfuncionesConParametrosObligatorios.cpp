#include <iostream>
#include <string>

using namespace std;

//Declarando la función con un parámetro.
void mostrar_nombre(string nombre) {
    cout << nombre << endl;
}

//Declarando la función con dos parámetros.
void mostrar_nombre_mas_apellido(string nombre, string apellido) {
    cout << nombre << " " << apellido << endl;
}

int b_funciones_con_parametros_obligatorios() { //b_funciones_con_parametros_obligatorios

	//Llamando la función y entregando un parámetro.
	mostrar_nombre("Daniel");

	//Llamando la función y entregando dos parámetros.
	mostrar_nombre_mas_apellido("Daniel", "Alvarez");

	return 0;

}
