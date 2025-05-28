programa {
  funcao inicio() {
    inteiro numeros[10]
    para (inteiro i = 0; i <= 9; i++){
      escreva ("Digite o valor do ", i + 1, "º numero: ")
      leia (numeros[i])
    }
    
    escreva("O número que mais se repete é: ", verificacao(numeros, 10))

  }
  funcao inteiro verificacao (inteiro numeros[],inteiro tamanho){
    inteiro contagemAtual = 0, maisFrequente = 0, maiorContagem = 0

    para (inteiro i = 0; i < tamanho; i++){
      inteiro contagemAtual = 0
      para (inteiro j = 0; j < tamanho; j++){
        se (numeros[i] == numeros[j]){
          contagemAtual++
        }
      }
      se (contagemAtual > maiorContagem){
        maiorContagem = contagemAtual
        maisFrequente = numeros[i]
      }
      retorne numeros[maisFrequente]
    }
  }
}
