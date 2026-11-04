#include <stdio.h>
#include <limits.h>
#include <stdint.h>

void clear(void)
{
    printf("\033[2J\033[H");
}


int main(void) 
{
    intptr_t  ipt = 1;    // intero con dimensione per un puntatore
    uintptr_t uipt = 1;   // anche se i puntatori non sono negativi essi si possono sottrare
    uint64_t  uint64 = 1; // intero unsigned 64 bit
    int64_t   int64 = 1;  // intero 64 bit
    size_t    szt = 1;    // dimensione massima di un oggetto

    //char  c = 1;    // 8  bit, 1 byte
    //short s = 2000; // 16 bit, 2 bytes
    int   x = 5;    // 32 bit, 4 bytes 
    long  l = 10;   // 64 bit, 8 bytes

    //clear();

    printf("int è: %lu bytes, int min: %d, int max: %d\n",
        sizeof(x),
        INT_MIN,
        INT_MAX
    );

    printf("Long is %lu bytes\n", sizeof(l));

    char c = 'A';
    printf("char: %d\n", c);
    printf("[%s]\n", "Hello world");
    printf("[%c%c%c]\n", 65, 'B', 67);

    int a[5] = {10, 5, 50, 100, 7};
    printf("%d %d %d\n", a[0], a[1], a[2]);

    //la stringa è un array di tipo char, 8 bit
    char str[6] = {'h', 'e', 'l', 'l', 'o', 0}; // 0 = null terminator
    char str2[6] = "hello"; // miglior modo per una stringa
    char str3[] = "hello"; // si può togliere la dimensione array per le stringhe
    int i = 0;
    while(str[i] != 0) // finchè non arriva al null terminator
    {
        printf("%c", str[i]);
        i++;
    }
    printf("\n");
    printf("Hello World: %s %s\n", str, str2);

    str3[3] = 'X';
    str3[3]++; // X -> Y
    printf("%s\n", str3);
    printf("sizeof: %lu\n", sizeof(str3)); // 6, anche se è "hello"

    return 0;
}
