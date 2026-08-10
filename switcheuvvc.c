#include <stdio.h> 

    
int main(){

    char opcao;
    printf("escolha entre essas opcoes apertando no numero correspondente: \n");
    printf("1 - banana\n ");
    printf("2 - uva\n ");
    printf("3 - mexerica\n ");

    scanf("%c", &opcao);
    switch(opcao){
        case '1':
            printf("a banana é bacana\n");
            break;
        case '2':
            printf("a uva é biruta\n");
            break;
        case '3':
            printf("a mexerica é enxerida\n");
            break;
                
    }


}
