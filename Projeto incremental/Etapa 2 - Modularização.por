programa {
  inclua biblioteca Util --> u
  funcao inicio() {
    mostrarMenu ()
  }
  funcao vazio mostrarMenu(){
    inteiro opcao
    faca{
      escreva ("===== SISTEMA BANCÁRIO =====\n")
      escreva ("0 - Sair\n")
      escreva ("1 - Criar Conta\n")
      escreva ("2 - Exibir Contas\n")
      escreva ("3 - Depositar\n")
      escreva ("4 - Sacar\n")
      escreva ("5 - Buscar Conta\n")
      escreva ("===========================\n\n")
      u.aguarde (1000)
      escreva ("Escolha uma opção: ")
      leia (opcao)
            se (opcao == 0){
         escreva ("saindo do sistema...\n") 
        pare
      }

      senao{
      escolha (opcao){

        caso 1:
          criarConta ()
          pare
        caso 2:
          exibirConta ()
          pare
        caso 3:
          depositar ()
          pare
        caso 4:
          sacar ()
          pare
        caso 5:
          buscarConta ()
          pare
        caso contrario:
          escreva("Opção Inválida!\n")
          pare
        }
      }
      u.aguarde (2000)
      limpa()

    } enquanto (opcao != 0)
  }
  funcao criarConta(){
    escreva ("Opção Criar Conta selecionada.")
  }
  funcao exibirConta(){
    escreva ("Opção Exibir Conta selecionada.")
  }
  funcao depositar (){
    escreva ("Opção Depositar selecionada.")
  }
  funcao sacar (){
    escreva ("Opção Sacar selecionada.")
  }
  funcao buscarConta (){
    escreva ("Opção Buscar Conta selecionada.")
  }
}
