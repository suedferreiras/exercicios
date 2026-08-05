#include <stdio.h>

int main(){
    char produtos[5][20]; int quantidade[5], estoque[3], n; float preco[5];

    for(n = 1; n <= 5; n++){
        printf("nome do %dº produto: \n", n); 
        scanf(" %[^\n]", produtos[n]); 
        printf("quantidade: \n"); 
        scanf("%d", &quantidade[n]);
        printf("preço: \n"); 
        scanf("%f", &preco[n]);
    }
    for(n = 1; n <= 5; n++){
        estoque[n] = preco[n] * quantidade[n];
        printf("\n *****RELATÓRIO*****\n");
        if(estoque[n] < 10){
            printf(" PRODUTO: %s - QUANTIDADE: %d - PREÇO: %.2f - ESTOQUE BAIXO \n", produtos[n], quantidade[n], preco[n]);
        } else if (estoque[n] <= 50){
            printf(" PRODUTO: %s - QUANTIDADE: %d - PREÇO: %.2f - ESTOQUE MÉDIO \n", produtos[n], quantidade[n], preco[n]);
        } else {
            printf(" PRODUTO: %s - QUANTIDADE: %d - PREÇO: %.2f - ESTOQUE OK \n", produtos[n], quantidade[n], preco[n]);
        }
    }

    return 0;

}