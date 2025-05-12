programa {
  funcao inicio() {
    real peso, altura, imc

    escreva ("Qual seu peso? ")
    leia (peso)

    escreva ("Qual sua altura? ")
    leia (altura)

    imc = peso / altura * altura

    escreva ("Seu imc eh: ", imc, "\n")
    
    se (imc < 18.5){
      escreva ("Abaixo do peso")
    }
    senao se (imc >= 18.6 e imc <= 24.9){
      escreva ("Peso normal")
    }
    senao se (imc >= 25 e imc <= 29.9){
      escreva ("Sobrepeso")
    }
    senao se (imc >= 30 e imc <= 34.9){
      escreva ("Obesidade grau 1")
    }
    senao se (imc >= 35 e imc <= 39.9){
      escreva ("Obesidade grau 2")
    }
    senao se (imc > 40){
      escreva ("Obesidade grau 3")
    }
  }
}
