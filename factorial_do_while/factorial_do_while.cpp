/* EJERCICIO 6: Desarrollar un programa en en C++ que calcule el factorial de un
número. Usando un bucle Do While */

#include <iostream>
using namespace std;

int main(){
	int fact, cont, num;
	cont = 1;
	fact = 1;
	cout << "Ingrese un numero del que desee saber su factorial: " << endl;
	cin >> num;
	
	do{
		fact = fact * cont;
		cont++;
	}while(cont <= num);
	
	cout << "El factorial es: " << fact << endl;
	
	return 0;
}
