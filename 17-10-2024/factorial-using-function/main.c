/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int factorial(int n){;

    int result=1;
    if(n>0){
        for(int i=1;i<=n;i++)
        {
         result=result*i;
        }
        return result;
    }
    else
    {
     return 0;
    }
}
int main()
{
 int n;
 printf("enter a number to check factorial :");
 scanf("%d",&n);
 int fact=factorial(n);
 printf("the factorial of %d is:\n%d",n,fact);
    return 0;
}
