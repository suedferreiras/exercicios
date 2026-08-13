#include <stdio.h>
//PROGRAMA MINIBANCO
//DEPOSITO SAQUE CONSULTA SALDO E EXTRATO DA SESSÃO

void Menu(){
    printf("======MENU BANCO======\n"
            "1 - Depositar\n2 - Sacar\n3 - Consultar Saldo\n"
            "4 - Ver extrato\n0 - Sair\n"
            "Escolha: ");
}
int main(){

// variaveis

    float saldo = 0.00;
    char opcao = -1, nome[20];
// inicio 

    printf("\nBem-Vindo ao Mini Banco V. 1.0\n"
            "Digite seu nome: ");
    scanf(" %s", nome); 
    printf("Olá  %s, sua conta foi criada com saldo de %.2f!\n", nome, saldo);


    while(opcao != '0'){
    Menu();
    scanf(" %c", &opcao);
    switch(opcao){
        case '1':
        printf("Depositar");
        break;
        case '2':
        printf("Sacar");
        break;
        case '3':
        printf("Consultar Saldo");
        break;
        case '4':
        printf("Ver Extrato");
        break;
        case '0':
        printf("Saindo...\n");
        break;
        default:
        printf("Erro. Escreva novamente\n");





    }

    }

}