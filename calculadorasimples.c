#include <stdio.h>

int main(){

    float a, b, c,  m, d, s, r;
    char o; 
    
    printf("digite a operação usando um dos operadores a seguir: - + * /\n");
    scanf("%f  %c %f", &a, &o, &b );
    printf("Você digitou: %.2f %c %.2f\n", a, o, b);



    
    while (b == 0 && o == '/'){
    
            printf("A divisao nao pode ser por 0.\n");
            printf("Digite novamente: \n");
            
            scanf("%f  %c %f", &a, &o, &b );
            printf("Você digitou: %.2f %c %.2f\n", a, o, b);
            (b != 0);

        }
    while( o != '*' && o != '/' && o != '+' && o != '-' ){
            printf("Erro, digite novamente uma operação entre apenas dois numeros: \n");
            scanf("%f  %c %f", &a, &o, &b );
        }
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
            printf("vc é muito burro\n");
        }
        break;
    case '+':
        printf("%.2f  %c %.2f = %.2f\n", a, o, b, s);
        break;
    case '-':    
        printf("%.2f  %c %.2f = %.2f\n", a, o, b, r);
        break;
    default:
        printf("erro");

        }


        
    }







