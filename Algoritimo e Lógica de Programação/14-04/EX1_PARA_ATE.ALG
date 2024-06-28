Algoritmo "Ex1_Para_ate"
// Disciplina   : [Linguagem e Lógica de Programação] 
// Professor   : Antonio Carlos Nicolodi 

Var
// Seção de Declarações das variáveis
nome : caracter
cont, inicial, final : inteiro
Inicio

 escreval("Informe o nome")
leia(nome)

 escreval("Informe o numero inicial")
leia(inicial)
escreval("Informe o numero final")
leia(final)

//Contagem progressiva
para cont de inicial ate final faca
escreval(cont, " - ", nome)
fimpara
//Contagem regressiva
para cont de 100 ate 1 passo -1 faca
escreval(cont, " - ", nome)
fimpara

Fimalgoritmo