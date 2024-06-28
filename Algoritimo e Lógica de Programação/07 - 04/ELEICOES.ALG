Algoritmo "Eleicoes"


Var
  Municipio, repeticao : caracter
  TE, TVB, TVN, TVV, totalgeral : inteiro
  PVB, PVN, PVV : real


Inicio

limpatela

repita

  repita
        escreval("Informe o nome do Municipio")
        leia(Municipio)
  ate(maiusc (Municipio) >= "A") e (maiusc (Municipio) <=  "Z")
  
  repita
        escreval("Informe o Total de Eleitores do Municipio")
        leia(TE)
  ate(TE > 0)
  
  escreval("Informe o Total de Votos Brancos")
  leia(TVB)

  escreval("Informe o Total de Votos Nulos")
  leia(TVN)

  escreval("Informe o Total de Votos Validos")
  leia(TVV)

  PVB <- (TVB / TE) * 100 // % de Votos Brancos
  PVN <- (TVN / TE) * 100 // % de Votos Nulos
  PVV <- (TVV / TE) * 100 // % de Votos Validos
  
  totalgeral <- totalgeral + TE

  escreval("Nome do Municipio: ", Municipio)
  escreval("Porc. de Votos Brancos: ", PVB:5:2, "%")
  escreval("Porc. de Votos Nulos: ", PVN:5:2, "%")
  escreval("Porc. de Votos Validos: ", PVV:5:2, "%")
  
  escreval("Deseja fazer um novo calculo?")
  escreval ("S - sim")
  escreval ("N - não")
  leia (repeticao)
  
ate(repeticao <- "N")

  escreval ("Total Geral de Eleitores: ", totalgeral)

Fimalgoritmo