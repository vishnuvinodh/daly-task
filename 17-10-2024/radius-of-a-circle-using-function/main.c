/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define pi 3.14
float area(float rad)
{
   return pi *rad *rad;
}
int main()
{
 float rad;
 printf("enter the radius of a circle :");
 scanf("%f",&rad);
 if(rad<0)
 {
     printf("negative vale cant give area");
 }
 else
 {
   printf("the area of circle is :%.2f",area(rad));    
 }
 
    return 0;
}
