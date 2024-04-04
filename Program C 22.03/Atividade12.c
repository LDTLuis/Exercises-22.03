#include <stdio.h>
#include <stdbool.h>

int main (void) {

    int number = 1;

    while (number != 0) {
        scanf("%d", &number);

        if (number == 0) {
            printf("\nPrograma Encerrado");
        }
    }

    return 0;
}
