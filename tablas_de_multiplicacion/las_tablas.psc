Algoritmo las_tablas
	Definir tabla, num, resultado Como Entero
	tabla <- 1
	num <- 1
	Mientras tabla < 10 y num <= 10 Hacer
		Repetir
			Repetir
				resultado <- tabla*num
				Escribir tabla, ' * ', num, ' = ', resultado
				num <- num+1
			Hasta Que num > 10
	
		tabla = tabla + 1
		num = 1
		
		Hasta Que  tabla > 10
	FinMientras
FinAlgoritmo
