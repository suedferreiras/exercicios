#include <stdio.h>

int main(){

    float a, b, m, d, s, r;
    char o;
    
    printf("digite a operação usando um dos operadores a seguir: - + * /\n");
    scanf("%f  %c %f", &a, &o, &b );
    printf("Você digitou: %.2f %c %.2f\n", a, o, b);

    m = a * b; 
    switch (o)
    {
    case '*':
        printf(" %f  %c %f = %f\n", a, o, b, m);
        break;
    
    default:
        break;
    }







}
