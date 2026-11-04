#include <stdio.h>

int main(void)
{
    int i = 5;

    // con graffe
    if (i > 3) {
        printf("i > 3\n");
    } else {
        printf("i <= 3\n");
    }

    // blocco unico
    if (i > 3) printf("i > 3, blocco unico\n");

    // senza graffe
    if (i > 3)
        printf("i > 3, senza graffe\n");
    else
        printf("i <= 3, senza graffe\n");

    // BLOCCO
    {
        int i = 4; // questa i è locale a questo blocco
        printf("ciao %d\n", i);
    }
    printf("%d\n", i); // usa il i fuori blocco = 5

    return 0;
}
