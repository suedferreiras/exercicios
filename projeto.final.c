#include <stdio.h>
//PROGRAMA MINIBANCO
//DEPOSITO SAQUE CONSULTA SALDO E EXTRATO DA SESSÃO

void Menu(){
    printf("\n======MENU BANCO======\n"
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


    }

}