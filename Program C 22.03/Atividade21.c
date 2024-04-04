#include <stdio.h>

int main (void) {

    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    int i = 1;

    printf("\n");

    do {
        printf("%d\n", i);
        i++;

    } while (i <= num);

    return 0;
}
