programa {
  funcao inicio() {
    inteiro qtdAcima = 0
    real notas [10], media, somaNota = 0

    para (inteiro i = 0; i < 10; i++){
      escreva ("Digite a nota ", i + 1, ": ")
      leia (notas [i])

     
      somaNota += notas [i]
    }

    media = somaNota / 10
    escreva ("A média foi: ", media, "\n")

    para (inteiro i = 0; i < 10; i++){
      se (notas [i] >= media){
        qtdAcima++
      }
    }

    escreva ("A quantidade de notas acima da média são: ", qtdAcima, "\n")
    escreva ("Notas acima da média:\n")
    
    para (inteiro i = 0; i < 10; i++){
      se (notas[i] >= media){
        escreva (notas [i], "\n")
      }
    }
  }
}
