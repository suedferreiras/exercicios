#include <stdio.h>

int main(){
    char produtos[5][20]; int quantidade[5], n; float preco[5], estoque[5];

    for(n = 1; n <= 5; n++){
        printf("nome do %dº produto: \n", n); 
        scanf(" %[^\n]", produtos[n]); 
        printf("quantidade: \n"); 
        scanf("%d", &quantidade[n]);
        printf("preço: \n"); 
        scanf("%f", &preco[n]);
    }
    printf("\n *****RELATÓRIO*****\n");
    for(n = 1; n <= 5; n++){
        estoque[n] = preco[n] * quantidade[n];
        if(estoque[n] < 10){
            printf(" \nPRODUTO: %s - QUANTIDADE: %d - PREÇO: %.2f - VALOR TOTAL ESTOQUE: %.2f - ESTOQUE BAIXO \n", produtos[n], quantidade[n], preco[n], estoque[n]);
        } else if (estoque[n] <= 50){
            printf(" \nPRODUTO: %s - QUANTIDADE: %d - PREÇO: %.2f - VALOR TOTAL ESTOQUE: %.2f - ESTOQUE MÉDIO \n", produtos[n], quantidade[n], preco[n], estoque[n]);
        } else {
            printf(" \nPRODUTO: %s - QUANTIDADE: %d - PREÇO: %.2f - VALOR TOTAL ESTOQUE: %.2f - ESTOQUE OK \n", produtos[n], quantidade[n], preco[n], estoque[n]);
        }
    }

    return 0;

}