#include <stdio.h>
#include <stdbool.h>

int main (void) {

    char name[] = "Luis Felipe Oliveira Borges";

    while(name) {
        printf("%s\n", name);

        if (kbhit() && getch() == 27) {
            printf("%s\n", name);
            break;

        }
    }

    return 0;
}
