/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[9],i,larg,secondlarg;
  printf("enter the array elements :");
  for(i=0;i<9;i++)
  {
      scanf("%d",&a[i]);
  }
  larg=secondlarg=a[0];
  for(i=0;i<9;i++)
  {
    if(a[i]>larg)
    {
     secondlarg=larg;
     larg=a[i];
    }
    else if(a[i]>secondlarg && a[i]!=larg)
    {
        secondlarg=a[i];
    }
  }
  printf("the second largest number is : %d",secondlarg);
  
     return 0;
}
