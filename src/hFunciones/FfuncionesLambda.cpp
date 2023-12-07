#include <iostream>
#include <string>

using namespace std;

// Una función lambda en C++ es una forma concisa de definir una función anónima en línea. Se trata de una función sin nombre que se puede definir directamente en el lugar donde se necesita, sin la necesidad de declararla por separado.

//Creando función lambda (Declaración).
auto mi_funcion = [](string parametro) -> string {
	string texto_1 = "Hola";
	texto_1.append(" " + parametro);
	return texto_1;
};

//Creando función lambda (Declaración + Llamado) (Este es el real potencial de una función lambda).
string resultado_2 = [](string parametro) -> string {
	string texto_2 = "Hello";
	texto_2.append(" " + parametro);
	return texto_2;
}("World");

int f_funciones_lambda() { //f_funciones_lambda

	//Llamando función lambda (Se almacena el resultado en una variable);
	string resultado_1 = mi_funcion("Mundo");

	//Imprimiendo resultado dde las funciones lambda.
	cout << resultado_1 << endl;
	cout << resultado_2 << endl;

	return 0;

}
