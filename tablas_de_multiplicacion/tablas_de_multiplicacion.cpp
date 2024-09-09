/* EJERCICIO 9 : Elabore el diagrama de flujo que imprima por pantalla las tablas de
multiplicar del 1 al 9. Posteriormente codifíquelo en C++ */

#include <iostream>
using namespace std;

int main(){
	int tabla, num, resultado;
	tabla = 1;
	num = 1;
	while(tabla < 10 && num <= 10){
		do{
		cout << "Tabla numero: " << tabla << endl;
			
			do{
				resultado = tabla * num;
			
				cout << tabla << " * " << num << " = " << resultado << endl;
				num++;
			}while(num <= 10);
		
		tabla++;
		num = 1;
	}while (tabla <= 10);
	}
	
	
	return 0;
}
