Algoritmo "opcoes"

Var

opcao : inteiro
num1, resultado : real


Inicio

repita

limpatela

escreval ("Escolha uma das opções")
escreval ("1 - Par / Impar")
escreval ("2 - Positivo / Negativo")
escreval ("3 - Raiz Quadrada")
escreval ("4 - Sair")
leia (opcao)

   escolha opcao
           caso 1
              escreval ("Par / Impar")
              escreval ("Digite o número")
              leia (num1)
              
              se (num1 % 2 = 0) entao
                 escreval ("O número é par")
              senao
                 escreval ("O número é impar")
              fimse
              
           caso 2
              escreval ("Positivo / Negaivo")
              escreval ("Digite o número")
              leia (num1)
              
              se (num1 > 0) entao
                 escreval ("O número é positivo")
              senao
                   escreval ("O número é negativo")
              fimse


            caso 3
                 escreval ("Raiz Quadrada")
                 escreval ("Digite o número")
                 leia (num1)
                 
                 resultado <- raizq(num1)
                 
                 escreval ("A raiz quadrada é: ", resultado)
                 
            caso 4
                 Escreval ("Obrigado e volte sempre")
                 
                 
                 
            outrocaso
                 escreval ("Opção inválida")
              
              
   fimescolha
   
pausa


ate (opcao = 4)

Fimalgoritmo