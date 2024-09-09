/* EJERCICIO 8: Elabore un programa en C++ que pida por teclado dos números,
muestre la suma en pantalla y pregunte al usuario si quiere realizar
otra suma */

#include <iostream>
using namespace std;

int main(){
	int num1, num2, suma;
	char opc;
	opc = 'S';
	do{
	cout << "Ingrese dos numeros para realizar una suma. " << endl;
	cout << "Primer numero: " << endl;
	cin >> num1;
	cout << "Segundo numero: " << endl;
	cin >> num2;
	suma = num1 + num2;
	cout << "El resultado de la suma es: " << suma << endl;
	cout << "Quiere hacer otra suma? S / N" << endl;
	cin >> opc;
	} while (opc == 'S' || opc == 's');
	
	cout << "Fin del programa " << endl;
	
	return 0;
}
