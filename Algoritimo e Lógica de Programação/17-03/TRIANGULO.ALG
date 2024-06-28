Algoritmo "Triangulo"

var

num1, num2, num3 : real

Inicio

escreval ("Digite o primeiro número:  ")
leia (num1)

escreval ("Digite o segundo número:  ")
leia (num2)

escreval ("Digite o terceiro número:  ")
leia (num3)

se (num1+num2 > num3) e (num3+num2 > num1) e (num1+num3 > num2) entao

se (num1=num2) e (num2=num3) entao

escreval ("Este triângulo é equilátero")

senao

se (num1=num2) ou (num1=num3) ou (num2=num3) entao

escreval ("O triângulo é isósceles")

senao

escreval ("O triângulo é escaleno")

fimse
fimse

senao

escreval ("As medidas não formam um triângulo")

fimse


Fimalgoritmo