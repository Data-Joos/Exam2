#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char *str;
    str = (char *)malloc(20*sizeof(char));
    /*str = (char *)calloc(20,sizeof(char));*/
    strcpy(str,"Hello");
    printf("%s\n",str);

    return 0;
}

/*
ETT TILL EXEMPEL

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Student
{
    char namn[10];
    short int age;
};

int main() {
    struct Student pbr;

    pbr = (struct Student)malloc(100 * sizeof(struct Student)); // malloc(size in bytes allocated in RAM)

    if (pbr == NULL)
        return 1;


    strcpy(pbr[0].namn, "Richie");
    strcpy(pbr[52].namn,"Linux");

    pbr[0].age = 80;
    pbr[52].age = 61;

    printf("%s %d\n",pbr[0].namn, pbr[0].age);
    printf("%s %d\n",pbr[52].namn, pbr[52].age);

    free(pbr);

    return 0;
}*/

/*

9. Write a program in C to find the largest element using Dynamic Memory Allocation. Go to the editor
Test Data :
Input total number of elements(1 to 100): 5

Number 1: 5
Number 2: 7
Number 3: 2
Number 4: 9
Number 5: 8
Expected Output :

The Largest element is :  9.00

#include <stdio.h>
#include <stdlib.h>

int main() {
    int noOfElements = 0;
    int largestElement = 0;

    printf("Input total number of elements (1 to 100): ");
    scanf("%d", &noOfElements);
    
    int *pekare = (int *)malloc(noOfElements * sizeof(int));
    
    for(int i = 0; i < noOfElements; i++) {
        printf("Number %d: ", i+1);
        scanf("%d", &pekare[i]);
        
        if(pekare[i] > largestElement)
            largestElement = pekare[i];
    }
    
    printf("The largest element is: %d\n", largestElement);

    free(pekare);
    
    return 0;
}*/