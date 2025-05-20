programa {
  funcao inicio() {
    real altura, comprimento, area

    escreva ("Digite o valor da altura do retângulo: ")
    leia (altura)
    
    escreva ("Digite o valor do comprimento do retângulo: ")
    leia (comprimento)

    area = calcularAreaRetangulo (altura, comprimento)

    escreva ("A área é: ", area)


    }
    funcao real calcularAreaRetangulo(real altura, real comprimento) {
      retorne altura * comprimento
  }
}
