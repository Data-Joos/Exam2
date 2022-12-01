#include <stdio.h>
#include <assert.h>

int main() {
    int i=2, j=3;
    int *pta;
    
    pta = (int*)0x00321;
    //pta = &i;

    assert(j>0); // har inget med gdb att göra, utan är en "försiktighetsåtgärd" för att undvika enkla fel (istället för att använda en "onödigt lång" if-sats)
    printf("%d/%d=%f\n", i, j, (float)i/j);

    printf("%p %d\n", pta, *pta);

    return 0;

    // för att köra gdb, kompilera med gcc -g filename.c, då skapas en a.out-fil, kör sedan gdb ./a.out.
}