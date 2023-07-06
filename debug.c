#include <stdio.h>

int main(void)
{
    int a = 10;
    int b = 20;
    int c;
    int i;
    c = a + b;
    printf("%d \n", c);

    for (i=1;i<10;i++)
    {
        printf("%d \n", c-i);
    }
    return 0;
}