programa {
  funcao inicio() {


    escreva("Digite -1 caso queira parar.\n")

    enquanto (verdadeiro){
      real ph
      escreva ("Digite o valor do pH: ")
      leia (ph)

      se (ph < -1 ou ph > 14){
        escreva ("pH inválido.\n")
      } 
      senao se (ph == -1){
        escreva ("acabou.")
        pare
      }
      senao se (ph > 7){
        escreva ("substância ácida.\n")
      }
      senao se (ph < 7){
        escreva ("substância básica.\n")
      }
      senao {
        escreva ("substância neutra.\n")
      }
    }
  }
}
