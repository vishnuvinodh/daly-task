/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[8],i,n;
  int max,min;
  printf("enter 8 elements :\n");
  for(i=0;i<8;i++)
  {
    scanf("%d",&a[i]);
  }
  max=min=a[0];
  for(i=0;i<8;i++)
  {
      if(a[i]>max)
      {
         max=a[i]; 
      }
      if(a[i]<min)
      {
          min=a[i];
      }
  }
  printf("the maximum valu is :%d\n",max);
  printf("the minimum valu is :%d\n",min);
  
    return 0;
}
