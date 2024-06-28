Algoritmo "TrAlgoritmo "Menu"



Var
// Seção de Declarações das variáveis
  op : inteiro
  r, n1, n2 : real

Inicio
   escreval("=========== Menu ==========")
   escreval("|  1 - Soma               |")
   escreval("|  2 - Subtracao          |")
   escreval("|  3 - Multiplicacao      |")
   escreval("|  4 - Divisao            |")
   escreval("===========================")
   escreval("Escolha uma das opções")
   leia(op)



   se (op >= 1) e (op <= 4) entao
      escreval("Digite o primeiro numero")
      leia(n1)
      escreval("Digite o segundo numero")
      leia(n2)



      escolha op
        caso 1
          escreval("Soma")
          r <- n1 + n2



        caso 2
          escreval("Subtracao")
          r <- n1 - n2



        caso 3
          escreval("Multiplicacao")
          r <- n1 * n2



        caso 4
          escreval("Divisao")
          r <- n1 / n2



//        outrocaso
//          escreval("Opção escolhida é inválida!!")
      fimescolha



      escreval("Resultado: ", r)
  senao
    escreval("Opção escolhida é inválida!!")
  fimse
Fimalgoritmo