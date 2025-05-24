programa {
  funcao inicio() {
    
    verificacao (0, 0, 0, 0, 0)
  }
  funcao verificacao (inteiro numeros, inteiro positivos, inteiro negativos, inteiro pares, inteiro impares){
    escreva ("Digite um valor: ")
    leia (numeros)

    se (numeros == 0){
    escreva ("Quantidade de positivos: ", positivos)
    escreva ("\nQuantidade de negativos: ", negativos)
    escreva ("\nQuantidade de pares: ", pares)
    escreva ("\nQuantidade de impares: ", impares)
    }
    senao se (numeros > 0 e numeros % 2 == 0){
      positivos++
      pares ++
      verificacao (numeros, positivos, negativos, pares, impares)
    }
    senao se (numeros < 0 e numeros % 2 == 0){
      negativos++
      pares ++
      verificacao (numeros, positivos, negativos, pares, impares)
    }
    senao se (numeros > 0 e numeros % 2 != 0){
      positivos ++
      impares ++
      verificacao (numeros, positivos, negativos, pares, impares)
    }
    senao {
      negativos ++
      impares ++
      verificacao (numeros, positivos, negativos, pares, impares)
    }
  }
}
