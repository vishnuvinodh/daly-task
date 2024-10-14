/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int n,sum=0;
   printf("enter a numer :");
   scanf("%d",&n);
   for(int i=1;i<=n;i++)
   {
       sum=sum+i;
          
   }
     printf("sum=%d",sum);
    return 0;
}
