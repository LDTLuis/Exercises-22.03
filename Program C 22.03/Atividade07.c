#include <stdio.h>

int main (void) {

    int i = 0;
    char word[15];

    printf("Digite uma palavra: \n");
    scanf("%s", word);

    while (i < 20) {
        printf("Você digitou: %s\n", word);
        i++;
    }

    return 0;
}
