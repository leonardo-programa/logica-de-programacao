programa {
  inclua biblioteca Util --> u
  funcao inicio() {
    
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
      
      escreva ("Escolha uma opção: ")
      leia (opcao)
            se (opcao == 0){
         escreva ("saindo do sistema...\n") 
        pare
      }

      senao{
      escolha (opcao){

        caso 1:
          escreva ("Opção Criar Conta selecionada.\n")
          pare
        caso 2:
          escreva ("Opção Exibir Contas selecionada.\n")
          pare
        caso 3:
          escreva ("Opção Depositar selecionada.\n")
          pare
        caso 4:
          escreva ("Opção Sacar selecionada.\n")
          pare
        caso 5:
          escreva ("Opção Buscar Conta selecionada.\n")
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
}
