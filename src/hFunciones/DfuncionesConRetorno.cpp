#include <iostream>
#include <string>

using namespace std;

string saludar() {
	string saludo = "Hola ¿Como estas?";
	return saludo; //Retornando la variable "saludo".
}

int d_funciones_con_retorno() { //d_funciones_con_retorno

	cout << saludar(); //Imprimiendo el retorno de la función.

	return 0;

}
