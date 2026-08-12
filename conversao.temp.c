#include <stdio.h>

void Menu(){
    printf("\n******MENU DE OPÇÕES******\n"
        "1 - Celsius para Fahrenheit\n2 - Fahrenheit para Celsius\n0 - Sair\n"
        "Sua escolha: ");
}

void C_F(){
    float c, f;
    printf("Temperatura em Celsius: ");
    scanf("%f", &c);
    f = c * (9.0 / 5.0) + 32; 
    printf("Resultado: %.2f Fahrenheit\n", f);
}

void F_C(){
    float f, c;
    printf("Temperatura em Fahrenheit: ");
    scanf("%f", &f);
    c = (f - 32) * (5.0 / 9.0); 
    printf("Resultado: %.2f Celsius\n", c);
}
int main(){
    char opcao;
    
    do {
        Menu();
        scanf(" %c", &opcao);
        
        switch (opcao){
        case '1':
            C_F();
            break;
        case '2':
            F_C();
            break;
        case '0':
            printf("Saindo.....\n");
            break;
        default:
            printf("Erro, tente novamente \n");
            break;
        }
    } while(opcao != '0');

}
    

