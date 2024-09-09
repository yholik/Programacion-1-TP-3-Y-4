/* EJERCICIO 7: Elabore un programa en C++ que calcule las notas de un alumno, el
programa va a terminar cuando el estudiante no quiera ingresar más
notas */

#include <iostream>
using namespace std;

int main(){
	int nota, suma;
	char opc;
	suma = 0;
	opc = 'S';
	
	do{
		cout << "Ingrese una nota: " << endl;
		cin >> nota;
		suma = suma + nota;
		cout << "Quiere seguir ingresando notas? S/N" << endl;
		cin >> opc;
	} while(opc == 'S' || opc == 's');
	
	cout << "La suma de sus notas es: " << suma << endl;
	
	return 0;
}
