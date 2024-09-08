/* EJERCICIO 3: Desarrollar un programa en C++ que determine si un año ingresado
por el usuario es bisiesto o no. Un año es bisiesto si es divisible por
4 pero no por100, o si es divisible por 400 */

// anio

#include <iostream>
using namespace std;

int main(){
	int anio;
	cout << "Ingrese el anio: " << endl;
	cin >> anio;
	
	if(anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0){
		cout << "El anio es bisiesto" << endl;
	}else{
		cout << "El anio no es bisiesto " << endl;
	}
	
	return 0;
}
