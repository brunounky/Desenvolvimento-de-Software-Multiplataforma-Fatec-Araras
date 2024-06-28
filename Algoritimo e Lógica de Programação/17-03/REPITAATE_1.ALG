Algoritmo "repitaate_1"

Var

   nome : caracter
   contador : inteiro
   acumulador : inteiro

Inicio

      contador := 0
      
      escreval ("Digite seu nome: ")
      leia (nome)
      
      repita
      
            contador := contador + 1
            escreval ("Nome: ", contador, ": ", nome)
            
            acumulador := acumulador + contador
            
      ate (contador = 10000)
      
          escreval ("Valor acumulador: ", acumulador)

Fimalgoritmo