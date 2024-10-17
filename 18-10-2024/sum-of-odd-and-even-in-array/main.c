/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[8],i,odd=0,even=0;
  printf("enter the 8 elements in the array :");
  for(i=0;i<8;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<8;i++)
    {
        if(a[i]%2==0)
        {
            odd=odd+a[i];
        }
        else
        {
            even=even+a[i];
        }
    }
    printf("sum of even numbers :%d\n",even);
    printf("sum of odd numbers :%d\n",odd);
    return 0;
}
