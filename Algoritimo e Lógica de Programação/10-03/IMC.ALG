Algoritmo "IMC"

Var

cod, nome : caracter
altura, peso, imc: real

Inicio

escreval ("Informe o código do paciente: ")
leia (cod)

escreval ("Informe o nome do paciente: ")
leia (nome)

escreval ("Informe a altura do paciente: ")
leia (altura)

escreval ("Informe o peso do paciente: ")
leia (peso)

imc := peso/ (altura * altura)


escreval ("Código do paciente: ", cod)
escreval ("Nome do paciente: ", nome)
escreval ("O índice de IMC do paciente é: ", imc:10:2)

se (imc < 18) entao
escreval ("Baseado nas informações, a classificação de obesidade do paciente é: Magreza")
fimse


se (imc >= 18 ) e ( imc < 25 ) entao
escreval ("Baseado nas informações, a classificação de obesidade do paciente é: Normal")
fimse


se (imc >= 25 ) e ( imc < 30 ) entao
escreval ("Baseado nas informações, a classificação de obesidade do paciente é: Sobrepeso")
fimse


se (imc >= 30 ) e ( imc < 35 ) entao
escreval ("Baseado nas informações, a classificação de obesidade do paciente é: Obesidade grau I")
fimse


se (imc >= 35) e ( imc <40 ) entao
escreval ("Baseado nas informações, a classificação de obesidade do paciente é: Obesidade grau II")
fimse


se (imc >= 40) entao
escreval ("Baseado nas informações, a classificação de obesidade do paciente é: Obesidade grau III (Obesidade Grave ou Mórbida")
fimse






Fimalgoritmo