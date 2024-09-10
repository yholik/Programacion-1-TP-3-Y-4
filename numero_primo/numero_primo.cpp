/* EJERCICIO 13: Elabore el diagrama de flujo que lea un número positivo del 1
al 9 y determine si se trata de un numero primo. Posteriormente
codifíquelo en C++. */

#include <iostream>
using namespace std;

int main(){
	int cont = 0, n, i;
	
	 do{
	 cout << "Ingrese numero" << endl;
	 cin >> n;
	 }while( n>=1 || n <= 9);
	 
	for(i = 1; i <=n; i++){
		if(n%i == 0){
			cont++;
		}
	}
	
	if(cont > 2){
		cout << "El numero " << n << " no es primo." << endl;
	}else{
		cout << "El numero " << n << " es primo." << endl;
	}

	return 0;
}
