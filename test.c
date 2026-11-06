#include <stdio.h>
int main(void)
{
    int i=0;

start_loop:

    if (i < 10) goto enter_loop;
    goto exit_loop;

enter_loop:

    printf("i is %d\n", i);
    i++;
    goto start_loop;

exit_loop:

    printf("finished!\n");


    // infinite loop ig
    //l1: printf("ciao");
    //l2: goto l1;

    i = 0;
    while (i < 10){ printf("I IS: %d\n", i); i++; }
    
    return 0;
}
