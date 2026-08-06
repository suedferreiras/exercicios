#include <stdio.h>

void linhaTracejada(){
    printf("\n===\n");
}
float calcularMedia(float x, float y){
    return (x + y)/2.0;
}

int ehPar(int x){
    return (x % 2 == 0);
    
}
int main(){
    linhaTracejada();
    printf("media: %.1f", calcularMedia(5.0,7.0));
    linhaTracejada();
    printf("teste função ehPar (7): %d \n", ehPar(7));
    printf("teste função ehPar (12): %d \n", ehPar(12));
    printf("teste função ehPar (33): %d\n", ehPar(33));
    return 0;
}