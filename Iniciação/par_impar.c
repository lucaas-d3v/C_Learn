#include <stdio.h>

char* parOuImpar(int num){
    int veredito = num % 2;

    if (veredito == 0){
        return "par";
    } 

    return "ímpar";
}

int main(){
    int num = 0;

    printf("Digite o número para saber se é ímpar ou par: ");
    scanf("%d", &num);

    printf("O número %d é %s\n", num, parOuImpar(num));

    return 0;
}