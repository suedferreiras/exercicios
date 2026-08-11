#include <stdio.h> 

void Menu(){
    printf("\nescolha entre essas opcoes apertando no numero correspondente:\n");
    printf("1 - banana\n");
    printf("2 - uva\n");
    printf("3 - mexerica\n");
    printf("X - sair do programa\n");
}

int main(){
    char opcao;
    
    do{
        Menu();
        scanf(" %c", &opcao);

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
        case 'X':
        case 'x':
            printf("obrigada por usar o programa\n");
            break;
        default:
            printf("erro >:( \n");
        }

    }while(opcao != 'x' && opcao != 'X');


}

