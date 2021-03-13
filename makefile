all: myshell islem tekrar topla cikar 

myshell: myshell.c
	gcc myshell.c -o myshell
islem : islem.c 
	gcc islem.c -o islem
tekrar: tekrar.c
	gcc tekrar.c -o tekrar
topla: topla.c
	gcc topla.c -o topla
cikar: cikar.c
	gcc cikar.c -o cikar
