/* EJERCICIO 10: Elabore el diagrama de flujo que lea 20 n�mero entero por el
teclado y determinar cu�l es el m�ximo y m�nimo. Posteriormente
codif�quelo en C++. */

#include <iostream>
using namespace std;

int main(){
	int max, min, num, cant;
	cant = 20;
	cout << "Ingresar numero " << endl;
	cin >> num;
	max = num;
	min = num;
	cant--;
	
	do{
		cout << "Faltan " << cant << " numeros" << endl << "Ingrese un numero: " << endl;
		cin >> num;
		
		if(num>max){
			max = num ;
		}else{
			if(num<min){
				min = num;
			}
		}
		cant--;
	}while(cant != 0);
	
	cout << "Numero maximo= " << max << " Numero min= " << min << endl;
	return 0;
}
