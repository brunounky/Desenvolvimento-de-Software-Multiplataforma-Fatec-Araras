Algoritmo "PromocaoLoja"

Var

qtdClientes, ano, anoNascimento, idade, totalIdade, cont  : inteiro
nomeCliente : caracter
gastoCliente, totalGasto, totalGastouMais, gastouMais, acumulaBebi, acumulaSalg, acumulaDoce, mediaGasto, mediaIdade : real

Inicio

      escreval("Informe a quantidades de clientes no dia: ")
      leia (qtdClientes)
      
      escreval ("Informe o ano: ")
      leia (ano)

//repetição

para cont de 1 ate qtdClientes faca
      
      escreval ("Informe o nome do cliente: ")
      leia (nomeCliente)
      
      escreval ("Informe o ano do nascimento: ")
      leia (anoNascimento)
      
      escreval ("Informe o valor gasto pelo cliente: ")
      leia (gastoCliente)
      
      escreval ("Gastou mais com: ")
      escreval ("B - Bebidas")
      escreval ("S - Salgados")
      escreval ("D - Doces")
      leia (gastouMais)
      

//Processamento


     idade := ano - anoNascimento

     totalIdade := totalIdade + idade

     totalGasto := totalGasto + gastoCliente

     totalGastouMais := totalGastouMais + gastouMais

      
//Guardar

      se gastouMais = "B" entao
         acumulaBebi <- acumulaBebi + gastoCliente
      senao
           se gastouMais = "S" entao
              acumulaSalg <- acumulaSalg + gastoCliente
           senao
                se gastouMais = "D" entao
                   acumulaDoce <- acumulaDoce + gastoCliente
                senao
                     escreval("Opção Inválida")
                fimse
           fimse
      fimse
      

fimpara  //Fim repetição
      
//Processamento

      mediaIdade := totalIdade / qtdClientes
      
      mediaGasto := totalGasto / qtdClientes
      
      se (acumulaBebi > acumulaSalg) e (acumulaBebi > acumulaDoce) entao
         escreval("O maior gasto foi com: Bebidas")
      fimse
      
      se (acumulaSalg > acumulaBebi) e (acumulaSalg > acumulaDoce) entao
         escreval("O maior gasto foi com: Salgados")
      fimse

      se (acumulaDoce > acumulaSalg) e (acumulaDoce > acumulaBebi) entao
         escreval("O maior gasto foi com: Doces")
      fimse
      
      escreval("A média das idades é: ", mediaIdade)
      escreval("A média de todos os gastos foi: ", mediaGasto)
      
      

Fimalgoritmo