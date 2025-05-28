programa {
  funcao inicio() {
    inteiro numeros [3][3], numeroEscolhido = 0, verificacao = 0

    para (inteiro i = 0; i < 3; i++){
      inteiro numero
      para (inteiro j = 0; j < 3; j++){
        escreva ("Digite um numero na posição [", i, "][", j, "]: ")
        leia (numero)
        numeros [i][j] = numero
      }
    }
    escreva ("Digite um número a ser procurado: ")
    leia (numeroEscolhido)
    
    
    escreva ("Procurando posições para o número ", numeroEscolhido, "\n")

    para (inteiro i = 0; i < 3; i++){
      para (inteiro j = 0; j < 3; j++){
        se (numeroEscolhido == numeros[i][j]){
          escreva ("Linha ", i, ", Coluna ", j, "\n")
          verificacao++
        }
      }
    }

    se (verificacao == 0){
      escreva ("O numero ", numeroEscolhido, " não foi encontrado")
    }
  }
}