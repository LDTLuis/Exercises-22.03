#include <stdio.h>

int main (void) {

    int num;

    printf("Digite um valor: ");
    scanf("%d", &num);

    int i = 1;

    while (i <= num ) {
        printf("%d\n", i);
        i++;
    }

    printf("\n");

    return 0;
}
