Algoritmo "repitaate_1"

Var

   nome : caracter
   contador : inteiro
   parada : inteiro

Inicio

      contador := 0
      
      escreval ("Digite seu nome: ")
      leia (nome)
      
      escreval ("Digite a quantidade de repetições: ")
      leia (parada)
      
      repita
      
            contador := contador + 1
            escreval ("Nome: ", contador, ": ", nome)

      ate (contador = parada)

Fimalgoritmo