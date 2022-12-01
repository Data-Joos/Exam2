#include <stdio.h>
#include <stdlib.h>


int main()
{
    int low = 5;
    int high = 10;
    int result;

    printf("Skriv en siffra mellan 1 & 10: ");
    scanf("%d",&result);

    if(result <=5)
    {
        printf("It's a low number.");
    }
    else if(result >5 && result <=10)
    {
        printf("It's a high number.");
    }
    else
    {
        printf("Try again. Choose a number between 1 & 10.");
    }





    return 0;
}