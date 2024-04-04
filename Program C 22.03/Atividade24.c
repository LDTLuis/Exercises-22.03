#include <stdio.h>

int main (void) {

    int somatorio = 0;

    for (int i = 1; i <= 10; i++) {
        somatorio += i;
    }

    printf("\n");
    printf("A soma dos números de 1 a 10 é: %d", somatorio);

    return 0;
}
