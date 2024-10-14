/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n,i,prim;
  printf("enter a number :");
  scanf("%d",&n);
  if(n<=1)
  {
      prim=0;
  }
  else
  {
      for(i=2;i*i<=n;i++)
      {
          if(n%i==0)
          {
              prim=0;
              break;
          }
      }
  }
  printf(" %d is %s prim number.\n", n,prim?"a":"not a");
    return 0;
}
