#include <stdio.h>

int main()
{
    //Inkrementering sker före tilldelning av värde, tilldelar variabeln j ett värde(j = 1+i)
    int i = 5;
    int j;

    j = ++i;

    printf("%d %d \n",j,i);

    //Inkrementering sker efter tilldelning av värde, tilldelar variabeln i ett värde(j = i i+1)

    i=5;

    j = i++;

    int k = i+1;

    printf("%d %d %d\n",j,i,k);


    return 0;
}