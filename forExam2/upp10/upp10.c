#include <stdio.h>
#include <stdlib.h>


int main()
{
    int num;
    int index;
    num = 100;

    for(index=0;index<=num;index++)
        if(index%2 == 0)
        {
            printf("%d  ",index);
        }
        else if(index%2 != 0)
        {
            printf("%d\n",index);
        }

    return 0;
}