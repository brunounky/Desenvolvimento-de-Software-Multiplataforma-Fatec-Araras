Algoritmo "Triangulo"

var

num1, num2, num3 : real

Inicio

escreval ("Digite o primeiro n�mero:  ")
leia (num1)

escreval ("Digite o segundo n�mero:  ")
leia (num2)

escreval ("Digite o terceiro n�mero:  ")
leia (num3)

se (num1+num2 > num3) e (num3+num2 > num1) e (num1+num3 > num2) entao

se (num1=num2) e (num2=num3) entao

escreval ("Este tri�ngulo � equil�tero")

senao

se (num1=num2) ou (num1=num3) ou (num2=num3) entao

escreval ("O tri�ngulo � is�sceles")

senao

escreval ("O tri�ngulo � escaleno")

fimse
fimse

senao

escreval ("As medidas n�o formam um tri�ngulo")

fimse


Fimalgoritmo