/* EJERCICIO 18: Desarrollar un programa que permita Sumar los números del
1 al 100 usando un bucle while */

#include <iostream>
using namespace std;

int main(){
	 int i = 0, sum = 0;
	 while(i <= 100){
	 	sum = sum + i;
	 	i++;
	 }
	cout << "El resultado de la suma del 1 al 100 es: " << sum << endl;
	
	return 0;
}
