#include <stdio.h>

int main (void) {

    int i;
    char word[15] = "Luís";

    do {
        printf("Você digitou: %s\n", word);
    } while (i < 20);

    return 0;
}
