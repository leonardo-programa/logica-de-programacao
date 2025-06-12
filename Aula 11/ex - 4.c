#include <stdio.h>
#include <string.h>

struct Produto{
char nome [50];
float preco;
};

int buscarProduto(struct Produto produtos[]){
    char produtoBusca[50];

    printf ("\nVoce deseja procurar qual produto? ");
    scanf ("%49[^\n]", produtoBusca);

    for(int i = 0; i < 3; i++){
        if (strcmp(produtoBusca, produtos[i].nome) == 0){
            return i;
        }
    }
    return -1;
}

int main(){
    struct Produto produtos [3];
    int produtoEncontrado;
    printf ("--- CADASTRO ---");

    for (int i = 0; i < 3; i++){
        printf ("\nProduto %d:\n", i + 1);
        printf ("Nome: ");
        scanf (" %49[^\n]", produtos[i].nome);
        printf ("Preco: ");
        scanf ("%f", &produtos[i].preco);
        getchar();
    }
    
    produtoEncontrado = buscarProduto(produtos);

    if (produtoEncontrado == -1){
        printf ("Produto nao encontrado");
    }
    else {
    printf ("\nA %s custa %.2f", produtos[produtoEncontrado].nome, produtos[produtoEncontrado].preco);
    }

    return 0;
}