Algoritmo "IMC"

Var

cod, nome : caracter
altura, peso, imc: real

Inicio

escreval ("Informe o c�digo do paciente: ")
leia (cod)

escreval ("Informe o nome do paciente: ")
leia (nome)

escreval ("Informe a altura do paciente: ")
leia (altura)

escreval ("Informe o peso do paciente: ")
leia (peso)

imc := peso/ (altura * altura)


escreval ("C�digo do paciente: ", cod)
escreval ("Nome do paciente: ", nome)
escreval ("O �ndice de IMC do paciente �: ", imc:10:2)

se (imc < 18) entao
escreval ("Baseado nas informa��es, a classifica��o de obesidade do paciente �: Magreza")
fimse


se (imc >= 18 ) e ( imc < 25 ) entao
escreval ("Baseado nas informa��es, a classifica��o de obesidade do paciente �: Normal")
fimse


se (imc >= 25 ) e ( imc < 30 ) entao
escreval ("Baseado nas informa��es, a classifica��o de obesidade do paciente �: Sobrepeso")
fimse


se (imc >= 30 ) e ( imc < 35 ) entao
escreval ("Baseado nas informa��es, a classifica��o de obesidade do paciente �: Obesidade grau I")
fimse


se (imc >= 35) e ( imc <40 ) entao
escreval ("Baseado nas informa��es, a classifica��o de obesidade do paciente �: Obesidade grau II")
fimse


se (imc >= 40) entao
escreval ("Baseado nas informa��es, a classifica��o de obesidade do paciente �: Obesidade grau III (Obesidade Grave ou M�rbida")
fimse






Fimalgoritmo