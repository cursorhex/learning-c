#include<stdio.h>

void conta(int start, int end)
{
    // elegante ma uso eccessivo di memoria

    //printf("%p %p\n", &start, &end);
    if (start > end) return;
    printf("fun: %d\n", start);
    conta(start+1, end); // chiamata ricorsiva
}

int main(void) 
{
    int i = 0;

again:
    printf("%d\n", i);
    i++;
    if (i < 10) goto again;

    // ciclo infinito stile BASIC, valido in C
    // l10, l20 sono ETICHETTE
    //
    // l10:    printf("ciao\n");
    // l20:    goto l10;
    

    // ciclo while
    i = 0;

    while (i < 10) { // esegue finchè la condizione è vera
        printf("%d\n", i);
        i++;
    }

    // il modo in cui il while viene compilato
    i = 0;

    loop:
    if (i >= 10) goto next; // se è vera usciamo dal ciclo
                            // anche if (!(i < 10))
        printf("%d\n", i);
        i++;
        goto loop; // ripetiamo il ciclo
    next: // fuori ciclo


    // stessa cosa ma entrando nel ciclo se i < 10
    i = 0;

    loop2:
    if (i < 10) goto enter_loop; // se vera entra nel loop
    goto next2; // se falsa esce dal loop
    enter_loop:
        printf("%d\n", i);
        i++;
        goto loop2;
    next2: //fuori ciclo


    // contatore con chiamata ricorsiva
    conta(0, 9);

    return 0;
}
