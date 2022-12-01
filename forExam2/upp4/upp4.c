#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    FILE *fpt = NULL;
    fpt = fopen("uppg4.txt","w");

    if(fpt == NULL) {
        printf("Error\n");
        return -1;
    }
    
    fprintf(fpt,"%s","Det här är en sträng.");

    fclose(fpt);

    fpt = fopen("uppg4.txt", "r");
    
    if(fpt == NULL) {
        printf("Error\n");
        return -1;
    }
    
    printf("Contents of file is:\n");
    char str[50];
  
    while(fgets(str, 50, fpt) != NULL) {
        printf("%s\n",str);
    }

    fclose(fpt);
    fpt = NULL;
    
    return 0;
}




/*#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>


int main()
{
    FILE *fpt = NULL;
    char ch[50];
    fpt = fopen("filename.txt","a+");

    if(fpt == NULL)
    {
        printf("Error\n");
        return -1;
    }
 
    if(fgets(ch,50,fpt) != NULL);
    {
        printf("%s",ch);
    }
    fprintf(fpt,"\n%s","Det här är en sträng: ");

    fclose(fpt);
    fpt = NULL;
    return 0;
}*/