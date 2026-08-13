#include <stdio.h>
#include <stdbool.h>
#include <string.h>

// PROGRAMA MINIBANCO
// DEPOSITO SAQUE CONSULTA SALDO E EXTRATO DA SESSÃO

const float LIMITE_SAQUE = 1000.00; // valor maximo por SAQUE
const float TAXA_SAQUE = 0.02; // 2% sobre cada saque feito

// FUNÇÕES DE EXIBIÇÃO
void exibirMenu(){
    printf("\n====== MENU BANCO ======\n"
           "1 - Depositar\n2 - Sacar\n3 - Consultar Saldo\n"
           "4 - Ver extrato\n0 - Sair\n"
           "Escolha: ");
}

void exibirSaldo(float saldo){
    printf("Saldo atual: R$ %.2f\n", saldo);
}

// O extrato agora é uma matriz: uma lista de frases
void exibirExtrato(char extrato[50][100], int totalLinhas){
    printf("\n---------- EXTRATO DA SESSÃO ----------\n");
    if(totalLinhas == 0){
        printf("Nenhuma movimentação registrada.\n");
    } else {
        for (int i = 0; i < totalLinhas; i++){
            printf("%s\n", extrato[i]);
        }
    }
    printf("---------------------------------------\n");
}

// FUNÇÕES DE CÁLCULO
float Depositar(float saldo, float valor){
    return saldo + valor;
}

float calcularTotalSaque(float valor){
    float taxa = valor * TAXA_SAQUE;
    return valor + taxa;
}

float Sacar(float saldo, float valor){
    float totaldebitado = calcularTotalSaque(valor);
    return saldo - totaldebitado; // Subtrai o valor + taxa do saldo
}

// FUNÇÕES DE VALIDAÇÃO
int valorValido(float valor){
    return valor > 0;
}

int saldoSuficiente(float saldo, float valor){
    float totaldebitado = calcularTotalSaque(valor);
    return saldo >= totaldebitado;
}

int dentroLimite(float valor){
    return valor <= LIMITE_SAQUE;
}

// REGISTRO DE EXTRATO (Copia a frase para a linha correta)
int registrar(char extrato[50][100], int totalLinhas, char linha[]){
    strcpy(extrato[totalLinhas], linha);
    return totalLinhas + 1;
}

// FLUXO DE OPERAÇÃO (Usamos ponteiros '*' para alterar o saldo e linhas direto na main)
void fluxoDepositar(float *saldo, char extrato[50][100], int *totalLinhas){
    float valor;
    char textoExtrato[100];
    
    printf("Valor a Depositar: ");
    scanf("%f", &valor);

    if(!valorValido(valor)){
        printf("Valor inválido. O depósito deve ser maior que zero.\n");
        return;
    }

    *saldo = Depositar(*saldo, valor);
    
    // Cria a frase do extrato de forma organizada
    sprintf(textoExtrato, "DEPÓSITO: +R$ %.2f | Saldo: R$ %.2f", valor, *saldo);
    *totalLinhas = registrar(extrato, *totalLinhas, textoExtrato);
    
    printf("Depósito de R$ %.2f realizado com sucesso!\n", valor);
    exibirSaldo(*saldo);
}

void fluxoSacar(float *saldo, char extrato[50][100], int *totalLinhas){
    float valor;
    char textoExtrato[100];
    
    printf("Valor a sacar: ");
    scanf("%f", &valor);

    if(!valorValido(valor)){
        printf("Valor inválido. O saque deve ser maior que zero.\n");
        return;
    }
    if(!dentroLimite(valor)){
        printf("Valor acima do limite permitido de R$ %.2f por saque.\n", LIMITE_SAQUE);
        return;
    }
    if(!saldoSuficiente(*saldo, valor)){
        printf("Saldo insuficiente para realizar o saque com a taxa.\n");
        return;
    }

    *saldo = Sacar(*saldo, valor);
    
    sprintf(textoExtrato, "SAQUE: -R$ %.2f (Taxa: R$ %.2f) | Saldo: R$ %.2f", valor, valor * TAXA_SAQUE, *saldo);
    *totalLinhas = registrar(extrato, *totalLinhas, textoExtrato);
    
    printf("Saque de R$ %.2f realizado com sucesso!\n", valor);
    exibirSaldo(*saldo);
}

int main(){
    int totalLinhas = 0;
    float saldo = 0.00;
    char opcao = -1;
    char nome[20];
    char extrato[50][100]; // Matriz que guarda até 50 frases de 100 caracteres cada

    printf("\nBem-Vindo ao Mini Banco V. 1.0\n");
    printf("Digite seu nome: ");
    scanf("%19s", nome); 
    printf("Olá %s, sua conta foi criada com saldo de R$ %.2f!\n", nome, saldo);

    while(opcao != '0'){
        exibirMenu();
        scanf(" %c", &opcao);
        
        switch(opcao){
            case '1':
                fluxoDepositar(&saldo, extrato, &totalLinhas);
                break;
            case '2':
                fluxoSacar(&saldo, extrato, &totalLinhas);
                break;
            case '3':
                exibirSaldo(saldo);
                break;
            case '4':
                exibirExtrato(extrato, totalLinhas);
                break;
            case '0':
                printf("Saindo do sistema... Até logo!\n");
                break;
            default:
                printf("Opção inválida. Tente novamente.\n");
        }
    }
    return 0;
}
