/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int i,j,n;
 printf("enter the number of row :");
 scanf("%d",&n);
 for(i=1;i<=n;i++)
 {
     for(j=1;j<=n;j++)
     {
         printf("* ");
     }
     printf("\n");
 }

    return 0;
}