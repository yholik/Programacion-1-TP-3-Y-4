Algoritmo sin_titulo
	Definir n, i, cont Como Entero
	cont <- 0
	Escribir 'Ingrese un numero'
	Leer n
	Para i<-1 Hasta in Con Paso 1 Hacer
		Si n MOD i==0 Entonces
			cont <- cont+1
		FinSi
	FinPara
	Si cont>2 Entonces
		Escribir 'El numero no es primo'
	SiNo
		Escribir 'El numero es Primo'
	FinSi
FinAlgoritmo
