/* EJERCICIO 14: Desarrollar un programa que solicite al usuario ingresar un
número del 1 al 7 y que imprima el día de la semana
correspondiente. (Por ejemplo, si el usuario ingresa 1,
15. imprimir "Lunes"; si ingresa 2, imprimir "Martes", etc.) */

#include <iostream>
using namespace std;

int main(){
	int dato;
	bool flag = true;
	do{
	cout << "Ingrese un numero del 1 al 7" << endl;
	cin >> dato;
	
	switch(dato){
		case 1: cout << "Lunes" << endl;
			break;
			case 2: cout << "Martes" << endl;
				break;
				case 3: cout << "Miercoles" << endl;
					break;
					case 4: cout << "Jueves" << endl;
					break;
						case 5: cout << "Viernes" << endl;
							break;
							case 6: cout << "Sabado" << endl;
								break;
								case 7: cout << "Domingo" << endl;
								break;
									default: cout << "Ha ingresado un numero invalido y el programa finalizo" << endl;
									flag = false;
									break;
	}
	
	}while(flag == true);
	
	
	return 0;
}
