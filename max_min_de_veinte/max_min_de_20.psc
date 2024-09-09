Algoritmo max_min_de_20
	Definir num, max, min, cant Como Entero
	cant <- 20
	Escribir 'ingresar numero'
	Leer num
	max <- num
	min <- num
	cant <- cant-1
	Repetir
		Escribir 'Faltan ', cant, 'numeros'
		Escribir 'ingrese un numero'
		Leer num
		Si num>max Entonces
			max <- num
		SiNo
			Si num<min Entonces
				min <- num
			FinSi
		FinSi
		cant <- cant-1
	Hasta Que cant=0
	Escribir 'Maximo ', max, ' Minimo ', min
FinAlgoritmo
