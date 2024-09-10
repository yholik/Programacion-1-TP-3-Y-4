Algoritmo menu_operaciones
	Definir r, n1, nu2, opc Como Entero
	Repetir
		Escribir 'Operacion deseada: 1) +  2) -  3) /  4) *  5) %  6)Salir '
		Leer opc
		Si opc>=1 Y opc<=5 Entonces
			Escribir 'Ingrese un numero'
			Leer num1
			Escribir 'Ingrese un numero'
			Leer num2
			Según opc Hacer
				1:
					r <- n1+n2
				2:
					r <- n1-n2
				3:
					r <- n1/n2
				4:
					r <- n1*n2
				5:
					r <- n1 MOD n2
				De Otro Modo:
					Escribir 'Fin del programa'
			FinSegún
			Escribir 'El resultado de la operacion es: ', resultado
		FinSi
	Hasta Que opc==6
FinAlgoritmo
