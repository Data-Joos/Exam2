#include <stdio.h>
#include <stdlib.h>


int main()
{
    int sum = 10;
    int *pSum = &sum;
    
    printf("Value of pSum is pointing to: %d\n",*pSum);
    printf("The adress of pSum is pointing to: %p\n",pSum);
    printf("The adress of sum is: %p\n",&sum);
    *pSum+=20;
    printf("Value of sum is pointing to: %d\n",sum);


    return 0;
}