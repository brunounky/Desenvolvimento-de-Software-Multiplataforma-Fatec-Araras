Algoritmo "TPA"

var

nome, cod : caracter
tpp, tpd, dezporcento : real

Inicio

escreval ("Informe seu nome: ")
leia (nome)

escreval ("Digite o código da maquina: ")
leia (cod)

escreval ("Informe o total de peças produzidas: ")
leia (tpp)

escreval ("Informe o total de peças defeituosas: ")
leia (tpd)

dezporcento := (tpp / 100) * 10

escreval ("Nome do funcionário: ", nome)
escreval ("Código da máquina: ", cod)

se tpd > dezporcento entao

escreval ("A máquina precisa de manutenção")

senao

escreval ("A máquina está em perfeito funcionamento")

fimse



Fimalgoritmo