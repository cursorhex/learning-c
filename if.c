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
        printf("i (%zu bytes) is stored at %p\n", sizeof(i), &i); // stampiamo il puntatore di i
    }
    printf("i= %d\n", i); // usa il i fuori blocco = 5
    printf("i (%zu bytes) is stored at %p\n", sizeof(i), &i); // puntatore fuori blocco i

    // Tra i dentro blocco e i fuori blocco ci sono 4 byte di distanza

    return 0;
}
