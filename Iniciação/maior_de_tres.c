#include <stdio.h>

int maiorDeTres(int num1, int num2, int num3){
    if (num1 > num2 && num1 > num3){
        return num1;
    } 
    
    if (num2 > num1 && num2 > num3){
        return num2;
    }

    return num3;
}

int main(){
    int num1 = 0, num2 = 0, num3 = 0;

    printf("Digite o 1º valor: ");
    scanf("%d", &num1);

    printf("\nDigite o 2º valor: ");
    scanf("%d", &num2);

    printf("\nDigite o 3º valor: ");
    scanf("%d", &num3);

    int maior = maiorDeTres(num1, num2, num3);

    printf("\nO maior número entre %d, %d e %d é: %d\n", num1, num2, num3, maior);

    return 0;
}