/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int i,n;
  printf("enter the no.of elements in array :");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  for(i=0;i<n;i++)
  {
    if(a[i]%2==0)
    {
        a[i]=0;
    }
  }
  printf("after replacement elements in array is :\n");
  for(i=0;i<n;i++)
  {
      printf("%d",a[i]);
  }

    return 0;
}
