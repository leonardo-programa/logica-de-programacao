programa {
  funcao inicio() {
    cadeia nome
    real peso, altura, imc

    escreva ("Qual seu nome? ")
    leia (nome)
    escreva ("Qual sua altura? ")
    leia (altura)
    escreva ("Qual seu peso? ")
    leia (peso)

    imc = peso / (altura * altura)

    escreva (nome, ", seu IMC é: ", imc)
  }
}
