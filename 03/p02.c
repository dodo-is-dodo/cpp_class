#include <stdlib.h>
#include <stdio.h>

int fact(int n);

int main(int argc, char *argv[])
{
    int i;
    int max = 10;
    for (i = 0; i < max; i++)
    {
        printf("%d\n", fact(i));
    }
    
    return 0;
}

int fact(int n)
{
    if (n <= 0)
        return 0;
    int s = 1;
    while (n)
        s *= n--;
    return s;
}

