#include <stdio.h>

int fib(int n){
    if (n == 0 || n == 1){  // Casos base para 0 E 1
        return n;
    }
    return fib(n - 1) + fib(n - 2);
}

int main(){
    int num = 0;
    
    printf("Digite um número: ");
    scanf("%d", &num);
    
    if(num < 0){
        printf("Por favor, digite um número não-negativo.\n");
        return 1;
    }
    
    int resultado = fib(num);
    printf("O resultado de fibonacci de %d é %d\n", num, resultado);
    
    return 0;
}