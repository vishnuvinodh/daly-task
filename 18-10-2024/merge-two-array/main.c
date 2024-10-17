/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int a[5],b[5],c[10];
  int i;
  printf("enter the elements in first array :");
  for(i=0;i<5;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enter the elementes in second array :\n");
  for(i=0;i<5;i++)
  {
      scanf("%d",&b[i]);
  }
  for(i=0;i<5;i++)
  {
      c[i]=a[i];
      c[i+5]=b[i];
  }
  printf("the merged array is :");
  for(i=0;i<10;i++)
  {
      printf("%d ",c[i]);
  }
    return 0;
}
