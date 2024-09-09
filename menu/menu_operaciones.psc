Algoritmo menu_operaciones
	Definir resultado, num1, num2, opc Como Entero
	Repetir
		Escribir "Ingrese un numero"
		Leer num1
		Escribir "Ingrese un numero"
		Leer num2
		Escribir "Operacion deseada: 1) +  2) -  3) /  4) *  5) %  6)Salir "
		Leer opc
		Segun opc
			1: resultado = num1 + num2
			2: resultado = num1 - num2
			3: resultado = num1 / num2
			4: resultado = num1 * num2
			5: resultado = num1 % num2
				
			De otro modo: 
				Escribir "Fin del programa"
		FinSegun
		Escribir "El resultado de la operacion es: ", resultado
	Hasta Que  opc == 6
		
FinAlgoritmo
