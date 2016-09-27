#include <stdlib.h>
#include <stdio.h>

int main()
{
    FILE *read = fopen("IN1.txt", "r");
    FILE *write = fopen("OUT1.txt", "w");
    char *str;
    int buff_size;
    float sum = 0;
    int temp;
    buff_size = 20;

    if (read == NULL)
        return -1;
    if (write == NULL)
        return -1;

    str = (char*)malloc(buff_size);
    while (fgets(str, buff_size, read))
    {
        int temp = atoi(str) * atoi(str);
        fprintf(write, "%d\n", temp);
        sum += temp;
    }
    fprintf(write, "%.2f\n", sum / 10);
    fclose(read);
    fclose(write);
    free(str);

    return 0;
}
