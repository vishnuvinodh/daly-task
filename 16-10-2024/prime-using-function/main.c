/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int prime(int n){
    if(n<=0)
    return 0;
    for(int i=2;i<=n/2;i++)
    {
        if(n%i==0)
        return 0;
    }
    return 1;
    }
int main()
{
   int n;
   printf("enter a number :");
   scanf("%d",&n);
   if(prime(n))
   {
       printf("%d is a prime number",n);
   }
   else
   {
       printf("%d is not a prime",n);
   }
    return 0;
}