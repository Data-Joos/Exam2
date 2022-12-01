#include <stdio.h>
#include <stdlib.h>

struct Struct
{
    int member1;
    int member2;
    int member3;
};


int main()
{
    struct Struct structVeriabel;
    struct Struct *structPointer = &structVeriabel;
    structPointer ->member1 = 20;
    structPointer ->member2 = 30;
    structPointer ->member3 = 40;
    printf("%d-%d-%d\n",structPointer->member1,structPointer->member2,structPointer->member3);

    return 0;
}