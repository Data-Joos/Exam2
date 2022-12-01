#include <stdio.h>
#include <stdlib.h>


int main()
{
    char arr[] = "Hej";
    char *pArr = &arr[0];

    printf("%p\n",arr);
    printf("%p\n",pArr);
    printf("%c\n",arr[0]);
    printf("%c\n",*pArr);
    printf("%c\n",*(pArr +1));

    return 0;
}