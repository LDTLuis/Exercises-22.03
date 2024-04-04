#include <stdio.h>
#include <stdbool.h>

int main (void) {

    int idade;

    do {
        printf("\nDigite sua idade: ");
        scanf("%d", &idade);

        if (idade > 123 || idade < 1) {
            printf("Idade invalida\n");
        }

    } while (idade > 123 || idade < 1);

    printf("\nIdade válida");

    return 0;
}
