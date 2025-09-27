#include <stdio.h>

void tabuada(int num){
    for(int i = 1; i != 11; i++){
        printf("%d x %d = %d\n", num, i, (num * i));
    }
}

int main(){
    int num = 0;

    printf("Digite um número para saber a sua tabuada: ");
    scanf("%d", &num);

    tabuada(num);

    return 0;
}