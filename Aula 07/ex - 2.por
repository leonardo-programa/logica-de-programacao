programa {
  funcao inicio() {
    inteiro numeros [10]

    para (inteiro i = 0; i < 10; i++){
      escreva ("Digite o valor ", i + 1, ": ")
      leia (numeros[i])
    }

    escreva ("valores na ordem inversa: \n")

    para (inteiro i = 9; i >= 0; i--){
      escreva (numeros[i], "\n")
    }
}
}
