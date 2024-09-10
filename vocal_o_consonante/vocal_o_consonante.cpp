/* EJERCICIO 16: Desarrollar un programa que solicite al usuario ingresar un
carácter y que determine si es una vocal o una consonante. */

//Añadi un bucle do-while para que el usuario pueda elegir salir del bucle cuando
// ya no quiera saber mas si un caracter es vocal o consonante.

#include <iostream>
using namespace std;

int main(){
	char dato;
	
	do{
	cout << "Ingrese una letra para saber si es vocal o consonante o 1 para salir" << endl;
	cin >> dato;
	
	if(dato == 'a' || dato == 'e' || dato == 'i' || dato == 'o' || dato == 'u'){
		cout << "Es vocal" << endl;
	} else {
		if(dato != '1'){
		cout << "Es consonante" << endl;
	}
	}
	} while(dato != '1');
return 0;
}

