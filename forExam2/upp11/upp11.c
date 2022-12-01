#include <stdio.h>

/* Boolesk algebra
   and Truth tables

   Prof that : X.Y + X.Z = X(Y+Z)
   with X={1,0}, Y={1,0} and Z={1,0}

   . means AND
   + means OR
    ^ means XOR

& (and), | (or), ˆ (xor), ˜ (not), << (skift left), >> (skift right)
*/

long tobinary(int);

int main(){
int X,Y,Z;

printf(" X\tY\tZ\tXY\tXZ\tY+Z\tXY+XZ\tX(Y+Z)\n");
for(X=0;X<2;X++)
  for(Y=0;Y<2;Y++)
    for(Z=0;Z<2;Z++)
      printf(" %d\t%d\t%d\t%d\t%d\t%d\t%d\t%d\n",
         X,Y,Z,X&Y,X&Z,Y|Z,(X&Y)|(X&Z), X&(Y|Z));

int dno = 20;
printf("%d-->%ld",dno,tobinary(dno));

 return 0;
}

long tobinary(int dno){
  // dno=decimal number
  long bno=0; //binary number
  int r,f=1;
  /* 
     T.ex om
     dno=11 => bno=1011
     r = dno%2;  r=11%2=1        <- | 
     bno += f*r; => bno = 1*1=1     |
     dno = 11/2; => dno=5;      -----

  */
  
  while(dno){
    r=dno%2;
    bno += f*r;
    dno /= 2;
    f *= 10;
  }

  return (bno);
}