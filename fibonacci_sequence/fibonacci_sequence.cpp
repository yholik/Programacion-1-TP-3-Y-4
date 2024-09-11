/* EJERCICIO 12: Elabore el diagrama que calcule la serie de Fibonacci hasta un
numero solicitado al usuario. Posteriormente codifíquelo en C++.
(En matemáticas, la sucesión de Fibonacci es la siguiente sucesión
infinita de números naturales:
1,1,2,3,5,8,13,21,34,55,89,144,233,377,610,987,1597,,,,,
A fibonacci de 0 lo tomamos como 1 por definición). */

#include <iostream>
using namespace std;

int main(){
	long a, b, c, num;
	a = 1;
	b = 1;
	c = 1;
	
	cout << "Ingrese hasta que numero quiere que se imprima la serie: " << endl;
	cin >> num;
	
	
	while( c < num){
		
		
		if(c > num){
			break;
		}
		
	cout << c << ", " << endl;
		// formula: el siguiente numero ( c ) es la suma de los dos anteriores
	
	// reemplazamos a por el valor de b
	a = b;
	// reemplazamos b por el valor de c que es el resultado de la formula
	b = c;

	}
	
	return 0;
}
