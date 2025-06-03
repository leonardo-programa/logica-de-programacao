#include <stdio.h>
void criarConta(){
    printf ("\nOpcao Criar Conta selecionada.\n\n");
}
void exibirConta(){
    printf ("\nOpcao Exibir Conta selecionada.\n\n");
}
void depositar (){
    printf ("\nOpcao Depositar selecionada.\n\n");
}
void sacar (){
    printf ("\nOpcao Sacar selecionada.\n\n");
}
void buscarConta (){
    printf ("\nOpcao Buscar Conta selecionada.\n\n");
}
void mostrarMenu (){
    int opcao;
      do{ 
        printf ("===== SISTEMA BANCARIO =====\n");
        printf ("0 - Sair\n");
        printf ("1 - Criar Conta\n");
        printf ("2 - Exibir Contas\n");
        printf ("3 - Depositar\n");
        printf ("4 - Sacar\n");
        printf ("5 - Buscar Conta\n");
        printf ("===========================\n\n");
        
        printf ("Escolha uma opcao: ");
        scanf ("%d", &opcao);

        if (opcao == 0){
            printf ("Saindo do sistema...\n") ;
            break;
        }

        else{
        switch (opcao){

        case 1:
          criarConta ();
          break;
        case 2:
          exibirConta ();
          break;
        case 3:
          depositar ();
          break;
        case 4:
          sacar ();
          break;
        case 5:
          buscarConta ();
          break;
        default:
          printf("Opção Inválida!\n");
          break;
        }
      }

    } while (opcao != 0);
    }
    
int main(){
    mostrarMenu();
    return 0;
}