#include <stdio.h>

int main (void) {

    int somatorio = 0;
    int n2;

    printf("Digite um valor inteiro: ");
    scanf("%d", &n2);

    for (int i = 1; i <= n2; i++) {
        somatorio += i;
    }

    float media = (float) somatorio / n2;

    printf("\n");
    printf("A m�dia dos n�meros de 1 a %d �: %.2f\n", n2, media);

    return 0;
}
