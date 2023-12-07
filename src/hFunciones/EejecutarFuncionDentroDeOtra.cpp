#include <iostream>
#include <string>

using namespace std;

string primera_funcion() {
	return "Retorno de la primera función";
}


string segunda_funcion() {
	return "Retorno de la segunda función";
}


string funcion_maestra() { //Esta función ejecuta otras funciones en su bloque de instrucciones.
    string variable = "";
    variable+=primera_funcion() + "\n";
    variable+=segunda_funcion();

    return variable;

}

int e_ejecutar_funcion_dentro_de_otra() { //e_ejecutar_funcion_dentro_de_otra

	cout << funcion_maestra(); //Imprimiendo el valor que retorna la función "funcion_maestra".

	return 0;

}
