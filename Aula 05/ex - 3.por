programa {
  funcao inicio() {
    real media
    inteiro falta
    escreva("Digite sua média: ")
    leia (media)
    escreva("Digite a quantidade de faltas: ")
    leia (falta)
    situacao (media, falta)
    
  }

  funcao situacao (real media, inteiro falta) {
    se (media < 0 ou media > 10 ou falta < 0){
      escreva ("Valores inadequados.")
    }
    senao se (media >= 9.5 e falta < 10) {
      escreva ("Aprovado com louvor.")
    }
    senao se (media >= 7 e falta < 10) {
      escreva ("Aprovado.")
    }
    senao {
      escreva ("Reprovado")
    }
  }
}
