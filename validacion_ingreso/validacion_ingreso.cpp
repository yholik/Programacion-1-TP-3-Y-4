/* EJERCICIO 19: Desarrollar un programa mediante un bucle Do While que
verifique que el usuario ingresa un numero > 100 si no es correcto
debe pedir un nuevo número hasta que ingrese un valor correcto */

#include <iostream>
using namespace std;

int main(){
	
	int dato;
	do{
		cout << "Ingrese un numero mayor a 100: " << endl;
		cin >> dato;
	}while(dato < 100);
	
	cout << "Ingreso el numero: " << dato << ". Fin del programa" << endl;
	return 0;
}
