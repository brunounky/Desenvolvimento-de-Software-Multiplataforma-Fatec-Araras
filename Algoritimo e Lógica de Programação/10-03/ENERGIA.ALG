algoritmo "energia"
var
cod, nome : caracter;
anterior, atual, consumo, tipolig : inteiro;
valorconta, valuni, valorcontafinal: real;
inicio

escreval ("Informe o c�digo do rel�gio: ")
leia (cod)
escreval ("Informe seu nome: ")
leia (nome)
escreval ("Digite o valor da leitura anterior do rel�gio: ")
leia (anterior)
escreval ("Digite o valor da leitura atual do rel�gio")
leia (atual)
escreval ("Escolha uma op��o referente ao tipo de liga��o: ")
escreval (" ")
escreval ("1 - Resid�ncia")
escreval ("2 - Com�rcio")
escreval  ("3 - Ind�stria")
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
escreval ("C�digo do rel�gio: ", cod)
escreval ("O consumo em KWh foi de: ", consumo)
escreval ("O valor da conta ser�: R$", valorcontafinal)

fimalgoritmo