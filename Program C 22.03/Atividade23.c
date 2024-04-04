#include <stdio.h>

int main (void) {

    int num1 = 1;
    int num2 = 1;

    printf("Digite o inicio do intervalo: ");
    scanf("%d", &num1);

    printf("Digite o final do intervalo: ");
    scanf("%d", &num2);

    if (num2 < num1) {
            printf("\nPrograma Encerrado");
        }

    for (int i = num1; i <= num2; i++) {
        printf("%d\n", i);
    }

    return 0;
}
