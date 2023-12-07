#include <iostream>

using namespace std;

//Variable global (Toda variable que está fuera de un bloque se considera global).
int numero_global = 10;

void mi_funcion()
{
    //Variable local (Toda variable que está dentro de un bloque se considera local).
    int numero_local = 20;

    cout << "Variable global: " << numero_global << endl;
    cout << "Variable local: " << numero_local << endl;
}

int g_variables_globales_y_locales() //g_variables_globales_y_locales
{
    mi_funcion();

    cout << "Variable global en main(): " << numero_global << endl;
    //cout << "Variable local en main(): " << numero_local << endl; //Las variables locales no son accesibles fuera de su bloque.

    return 0;
}
