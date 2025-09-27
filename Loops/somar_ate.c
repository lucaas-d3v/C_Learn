// Soma de números: Peça números ao usuário até ele digitar 0, depois mostre a soma total.
#include <stdio.h>
#include <stdbool.h>

int sum(int numeros[], int tamanho){
    int resultado = 0;
    int i = 0;

    for(i; i != tamanho; i++){
        resultado += numeros[i];
    }

    return resultado;
}

int main(){
    int numeros[10000];
    int i = 0;

    printf("-- Somador --\n\n");
    while(true){
        if(i >= 10000){
            printf("Limite máximo de números atingido!\n");
            break;
        }

        printf("Digite um número (digite 0 para sair): ");
        scanf("%d", &numeros[i]);
    
        if (numeros[i] == 0){
            break;
        }

        i++;

    }

    int tamanho = i;

    printf("\nA soma dos valores digitados é: %d\n", sum(numeros, tamanho), tamanho);

    return 0;
}