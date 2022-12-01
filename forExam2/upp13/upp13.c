#include <stdio.h>
#include <string.h>
int main()
{
    //strcpy funktion
     char s1[30] = "string 1";
     char s2[50] = "string 2 : I’m gonna copied into s1";
     /* this function has copied s2 into s1*/
     strcpy(s1,s2);
     printf("String s1 is: %s\n", s1);

    //strcmp funktion
     char s3[20] = "BeginnersBook";
     char s4[20] = "BeginnersBook.COM";
     /* below it is comparing s1 and s2*/
     if (strcmp(s3, s4) ==0)
     {
         printf("string 1 and string 2 are equal\n");
     }
     else
     {
         printf("string 1 and 2 are different\n");
     }

    //strlen funktion
    char arr[10] = "julafton";
    int lenght = strlen(arr);
    printf("Lenght of string is: %d\n",lenght);

    //strstr funktion
   const char haystack[20] = "TutorialsPoint";
   const char needle[10] = "Point";
   char *ret;

   ret = strstr(haystack, needle);

   printf("The substring is: %s\n", ret);


     return 0;
}