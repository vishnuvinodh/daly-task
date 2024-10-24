/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int i,n,j,sum;
  printf("enter the no.of elements in araay :");
  scanf("%d",&n);
  int a[n];
  for(i=0;i<n;i++)
  {
      scanf("%d",&a[i]);
  }
  printf("enter the sum to find pair :");
  scanf("%d",&sum);
  for(i=0;i<n;i++){
      for(j=i+1;j<n;j++){
          if(a[i]+a[j]==sum)
          {
              printf("%d,%d\n",a[i],a[j]);
          }    
          
      }
  }
   
    return 0;
}
