#include <stdio.h>

int main (void) {

    int i = 0, number;
    char word[15];

    printf("Digite uma palavra: \n");
    scanf("%s", word);

    printf("Digite quantas vezes vai se repetir: \n");
    scanf("%d", &number);

    while (i < number) {
        printf("Você digitou: %s\n", word);
        i++;
    }

    return 0;
}
