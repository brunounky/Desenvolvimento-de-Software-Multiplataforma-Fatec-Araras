Algoritmo "TrAlgoritmo "Menu"



Var
// Se��o de Declara��es das vari�veis
  op : inteiro
  r, n1, n2 : real

Inicio
   escreval("=========== Menu ==========")
   escreval("|  1 - Soma               |")
   escreval("|  2 - Subtracao          |")
   escreval("|  3 - Multiplicacao      |")
   escreval("|  4 - Divisao            |")
   escreval("===========================")
   escreval("Escolha uma das op��es")
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
//          escreval("Op��o escolhida � inv�lida!!")
      fimescolha



      escreval("Resultado: ", r)
  senao
    escreval("Op��o escolhida � inv�lida!!")
  fimse
Fimalgoritmo