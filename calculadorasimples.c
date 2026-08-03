#include <stdio.h>

int main(){

    float a, b, m, d, s, r;
    char o; 
    
    printf("digite a operação usando um dos operadores a seguir: - + * /\n");
    scanf("%f  %c %f", &a, &o, &b );
    printf("Você digitou: %.2f %c %.2f\n", a, o, b);

    m = a * b; d = a / b; s = a + b;r = a - b;

    switch (o)
    {
    case '*':
        printf("%.2f  %c %.2f = %.2f\n", a, o, b, m);
        break;
    case '/':
        if (a / b && b != 0){
            printf("%.2f  %c %.2f = %.2f\n", a, o, b, d);
        } else {
            printf("A divisao nao pode ser por 0.\n");
        }
        break;
    case '+':
        printf("%.2f  %c %.2f = %.2f\n", a, o, b, s);
        break;
    case '-':    
        printf("%.2f  %c %.2f = %.2f\n", a, o, b, r);
        break;
    default:
        if( o != '*' && o != '/' && o != '+' && o != '-' ){
            printf("Erro, digite novamente uma operação entre apenas dois numeros: \n");
        }

        break;
    }







}
