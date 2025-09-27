#include <stdio.h>

int fatorial(int n){
    int multiplicador = n - 1;
    int resultado = n;

    while (multiplicador != 0){
        resultado = resultado * multiplicador;
        
        multiplicador--;
    }

    return resultado;
}

int main(){
    int n = 0;

    printf("Digite um número para saber seu fatorial: ");
    scanf("%d", &n);

    printf("Fatorial de %d é %d\n", n, fatorial(n));

    return 0;
}