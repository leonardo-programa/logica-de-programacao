programa {
  funcao inicio() {
    inteiro numero, contadorNegativo = 0, contadorPositivo = 0
   
    escreva ("Caso queira parar, digite 0.\n")

    enquanto (verdadeiro){
      escreva ("Digite um numero: ")
      leia (numero)

      se (numero > 0){
        contadorPositivo++
      }
      senao se (numero < 0){
        contadorNegativo++
      }
      senao{
        pare
      }
    }

    escreva ("A quantidade de negativos foi: ", contadorNegativo, "\n")
    escreva ("A quantidade de positivos foi: ", contadorPositivo)
  }
}
