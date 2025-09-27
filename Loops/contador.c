// Contador: Imprima números de 1 a 100.

#include <stdio.h>

void contarAte(int n){
    int i = 0;

    for (i; i != n + 1; i++){
        printf("Contando: %d\n", i);
    }
}

int main(){
    int n = 0;

    printf("Digite um número: ");
    scanf("%d", &n);

    contarAte(n);

    return 0;
}