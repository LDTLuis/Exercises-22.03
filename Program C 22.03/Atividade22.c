#include <stdio.h>

int main (void) {

    int num = 1;

    printf("Digite um valor: ");
    scanf("%d", &num);

    int i = 1;

    printf("\n");

    for(i; i <= num; i++) {
        printf("%d\n", i);

    }

    return 0;
}
