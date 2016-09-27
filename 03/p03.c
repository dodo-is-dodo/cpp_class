#include <stdlib.h>
#include <stdio.h>
#include <string.h>

void reverse(char line[], int line_length);

int main(int argc, char *argv[])
{
    FILE *read = fopen("IN2.txt", "r");
    FILE *write = fopen("OUT2.txt", "w");
    char *str;
    int buff_size;
    int sum = 0;
    int temp;
    buff_size = 20;

    if (read == NULL)
        return -1;
    if (write == NULL)
        return -1;

    str = (char*)malloc(buff_size);
    for (int i = 0; i < 5; i++)
    {
        fgets(str, buff_size, read);
        printf("%d \n", strlen(str));
        reverse(str, strlen(str) - 1);
        printf("%s", str);
        fprintf(write, "%s", str);
    }
    fclose(read);
    fclose(write);
    free(str);

    
    return 0;
}

void reverse(char line[], int line_length)
{
    char temp;
    int len = line_length;
    for (int i = 0; i < len/2; i++)
    {
        temp = line[i];
        line[i] = line[len-i-1];
        line[len-i-1] = temp;
    }

}
