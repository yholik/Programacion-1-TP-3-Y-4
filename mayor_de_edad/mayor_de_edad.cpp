/* EJERCICIO 2: Desarrollar un programa en C++ que solicite el año de nacimiento de
una persona, calcular su edad: Si la edad es mayor o igual a 18
años, imprimir "La persona es mayor de edad", de lo contrario,
imprimir "La persona es menor de edad" */

// nac, edad, total

#include <iostream>
using namespace std;

int main(){
	int nac, edad, anio_actual;
	//Solicitamos año de nacimiento
	cout << "Ingrese su anio de nacimiento: " << endl;
	cin >> nac;
	//Solicitamos año actual para calcular su edad
	cout << "Ingrese anio actual" << endl;
	cin >> anio_actual;
	
	edad = anio_actual - nac;
	
	if(edad >= 18){
		cout << "La persona es mayor de edad" << endl;
	}else{
		cout << "La persona es menor de edad" << endl;
	}
	return 0;
}
