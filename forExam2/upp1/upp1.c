#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Date
{
    int day;
    int month;
    int year;
    char arr[20];
};

int function(int);

int main()
{
    int a = 30;
    printf("Age is %d\n",function(a));

    struct Date time = {01,12,2022,"Dagens datum"};
    struct Date test = {.year=2020,.month=12,.day=1,.arr="Dagens andra datum"};
    struct Date lista[10];
    lista[1].month = 8;
    strcpy(lista[8].arr,"Text");
    printf("%d %d %d %s\n",time.day,time.month,time.year,time.arr);
    printf("%d %d %d %s\n",test.day,test.month,test.year,test.arr);
    printf("Lista: %d %s\n",lista[1].month,lista[8].arr);
    

    return 0;
}

int function(int age)
{
    age = 25;

    return age;
}