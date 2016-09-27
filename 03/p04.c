#include <stdlib.h>
#include <stdio.h>

#define NUM_ST 100
struct student_rec{
    int student_id;
    int age;
    char nationality;
    int marks;
};
int random_num(int LOW, int HI);
char int_to_nationality(int n);
void sort(struct student_rec *list);


int main(int argc, char *argv[])
{
    struct student_rec *st_array;
    st_array = (struct student_rec*)malloc(sizeof(struct student_rec) * NUM_ST);

    int low = 20, high = 35;
    for (int i = 0; i < NUM_ST; i++)
    {
        st_array[i].student_id = i;
        st_array[i].age = random_num(low, high);
        st_array[i].nationality = int_to_nationality(random_num(0, 100));
        st_array[i].marks = random_num(0, 100);
    }
    sort(st_array);
    for (int i = 0; i < NUM_ST; i++)
    {
        printf("Id : %d\n", st_array[i].student_id);
        printf("Age : %d\n", st_array[i].age);
        printf("Nationality : %c\n", st_array[i].nationality);
        printf("Marks : %d\n\n", st_array[i].marks);
    }

    return 0;
}
char int_to_nationality(int n)
{
    if (n < 70)
        return 'K';
    else if (n < 85)
        return 'C';
    else if (n < 95)
        return 'V';
    else
        return 'I';
}

int random_num(int LOW, int HI)
{
    return rand()%(HI - LOW) + LOW;
}

void sort(struct student_rec *list)
{
    struct student_rec temp;
    for (int j = 0; j < NUM_ST-1; j++)
    {
        for (int i = 0; i < NUM_ST-1 - j; i++)
        {
            if (list[i].marks < list[i+1].marks)
            {
                temp = list[i];
                list[i] = list[i+1];
                list[i+1] = temp;
            }
        }

    }
}
