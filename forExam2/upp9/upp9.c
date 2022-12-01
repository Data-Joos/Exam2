#include <stdio.h>

int main()
{
    int user[5] = {1,2,3,4,5};


    int i = 0;
    int sum = 0;
    while(i<5)
    {
        sum += user[i];
        i++;
    }
    printf("%d",sum);


    return 0;
}

/*/Philipps version
#include <stdio.h>
#include <stdlib.h>

int main(){
  long i,sum=0;   // Now we can calculate very long series!!
  long max;

    char user[5];


    printf("Skriv in minst 5 heltal: ");
    scanf("%c ",user);

  max=strtol(user,'\0',5);

  for(i=1;i <= max;i++){
    sum += i;
  }

  printf("Sum = %ld\n",sum);
  return 0;
}*/