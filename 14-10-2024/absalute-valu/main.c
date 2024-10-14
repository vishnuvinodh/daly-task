/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int n,abs;
 printf("enter a number :");
 scanf("%d",&n);
 if(n<0)
    {
        abs=-n;
    }
    else
    {
       abs=n;
    }
    printf("absoluetvale is : %d ",abs);
}