/* Elabore el diagrama de flujo que a través de un menú le
posibilite al usuario si desea hacer las siguientes operaciones sobre
dos números enteros positivos. Posteriormente codifíquelo en C++.
El programa debe repetirse permitiendo hacer distintas operaciones
hasta que se decida terminar
Suma
Resta
Multiplicación
División
Resto */

#include <iostream>
using namespace std;

int main(){
	int r, n1, n2, opc;
	do{
		cout << "Seleccione la opcion deseada 1- Suma 2- Resta 3- Division 4- Multiplicacion 5- Resto 6- Terminar" << endl;
		cin >> opc;
		
		if(opc >= 1 && opc <= 5){
		
		cout << "Ingrese el primer numero: " << endl;
		cin >> n1;
		cout << "Ingrese el segundo numero: " << endl;
		cin >> n2;
		switch(opc){
		case 1:
				r = n1 + n2;
				break;
				case 2:
					r = n1 - n2;
					break;
				case 3:
						r = n1 / n2;
						break;
					case 4:
							r = n1 * n2;
							break;
					case 5:
								r = n1 % n2;
								break;
								default:
									opc = 6;
									break;
		}
		cout << "El resultado de la operacion es: " << r << endl;
		}
		
	}while(opc !=6 );
	
	return 0;
}
