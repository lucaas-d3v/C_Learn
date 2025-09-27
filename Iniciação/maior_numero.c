#include <stdio.h>

int max(int numeros[], int tamanho_lista){
    int maior = 0;

    for(int i = 0; i != tamanho_lista - 1; i++){
        if (numeros[i] > maior){
            maior = numeros[i];
        }
    }

    return maior;
}

int main(){
    int numeros[] = {10, 23, 45, 23, 45, 12};
    int tamanho_lista = sizeof(numeros) / sizeof(numeros[0]); 

    printf("O maior número é: %d\n", max(numeros, tamanho_lista));    

    return 0;
}