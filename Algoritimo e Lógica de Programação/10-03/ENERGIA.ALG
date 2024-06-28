algoritmo "energia"
var
cod, nome : caracter;
anterior, atual, consumo, tipolig : inteiro;
valorconta, valuni, valorcontafinal: real;
inicio

escreval ("Informe o código do relógio: ")
leia (cod)
escreval ("Informe seu nome: ")
leia (nome)
escreval ("Digite o valor da leitura anterior do relógio: ")
leia (anterior)
escreval ("Digite o valor da leitura atual do relógio")
leia (atual)
escreval ("Escolha uma opção referente ao tipo de ligação: ")
escreval (" ")
escreval ("1 - Residência")
escreval ("2 - Comércio")
escreval  ("3 - Indústria")
leia (tipolig)

consumo:=  (atual - anterior)

se (tipolig = 1) entao
valorconta := (consumo * 0.6)
fimse

se (tipolig = 2) entao
valorconta := (consumo * 0.48)
fimse

se (tipolig = 3) entao
valorconta := (consumo * 1.29)
fimse

valorcontafinal <- consumo * valorconta

escreval ("Detalhes da conta: ")
escreval ("Nome do cliente :", nome)
escreval ("Código do relógio: ", cod)
escreval ("O consumo em KWh foi de: ", consumo)
escreval ("O valor da conta será: R$", valorcontafinal)

fimalgoritmo