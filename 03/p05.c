#include <stdlib.h>
#include <stdio.h>

void swap(int x1, int x2);
void Swap(int *x1, int *x2);

int main(int argc, char *argv[])
{
    int a = 5, b = 10;
    swap(a, b);
    printf("%d %d\n", a, b);
    Swap(&a, &b);
    printf("%d %d\n", a, b);
    
    return 0;
}

void swap(int x1, int x2)
{
    int temp;
    temp = x1;
    x1 = x2;
    x2 = temp;
}
void Swap(int *x1, int *x2)
{
    int temp;
    temp = *x1;
    *x1 = *x2;
    *x2 = temp;
}
