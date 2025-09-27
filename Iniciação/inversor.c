#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char* inverted(char texto[], int tamanho) {
    char* invertido = malloc((tamanho + 1) * sizeof(char));
    if (!invertido) return NULL;

    for (int i = 0; i < tamanho; i++) {
        invertido[i] = texto[tamanho - 1 - i];
    }
    invertido[tamanho] = '\0'; // fecha a string

    return invertido;
}

int main() {
    char texto[100]; // espaço fixo
    printf("Digite uma palavra, para ver sua versão invertida: ");
    scanf("%99s", texto);

    int tamanho_lista = strlen(texto);

    char* inv = inverted(texto, tamanho_lista);

    printf("Versão normal: %s\nInvertida: %s\n", texto, inv);

    free(inv); // liberar memória alocada
    return 0;
}
