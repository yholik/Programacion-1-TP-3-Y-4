/* EJERCICIO 5: Desarrollar un programa en C++ que calcule el factorial de un
número. Usando un bucle While. */

#include <iostream>
using namespace std;

int main(){
	int cont, fact, num;
	cont = 1;
	fact = 1;
	cout << "De que numero desea conocer su factorial?" << endl;
	cin >> num;
	
	while(cont <= num){
		fact = fact * cont;
		cont ++;
	}
	cout << "El factorial del numero " << num << " es: " << fact << endl;
	
	return 0;
}
