#include <stdio.h>

double somar(double a, double b){
    return a + b;
}

double subtrair(double a, double b){
    return a - b;
}

double multiplicar(double a, double b){
    return a * b;
}

double dividir(double a, double b){
    return a / b;
}

int main(){
    double a = 0, b = 0;

    printf("Digite o valor do 1º número: ");
    scanf("%lf",&a);

    printf("Digite o valor do 2º número: ");
    scanf("%lf",&b);

    printf("Soma: %.2f\n", somar(a, b));
    printf("subtrair: %.2f\n", subtrair(a, b));
    printf("Multiplicar: %.2f\n", multiplicar(a, b));
    printf("Divisão: %.2f\n", dividir(a, b));

    return 0;
}