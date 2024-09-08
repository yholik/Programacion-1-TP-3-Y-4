/* EJERCICIO 4: Desarrollar un programa en C++ que calcule el factorial de un
número. Usando un bucle FOR */

#include <iostream>
using namespace std;

int main(){
	int num, total;
	cout << "Ingrese un numero" << endl;
	cin >> num;
	total = 1;	//Utilizamos un acumulador para conservar el nuevo resultado en cada multiplicacion
	
	for(int i = 1; i <= num ; i++){
		total = total * i;
	}
	
	cout << "El factorial de " << num << " es: " << total << endl;
	
	return 0;
}
