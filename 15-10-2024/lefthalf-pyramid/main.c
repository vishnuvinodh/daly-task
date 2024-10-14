/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
int i,j,n,k;
  printf("enter a number of rows :");
  scanf("%d",&n);
  for(i=1;i<=n;i++)
  {
    for(j=i;j<n;j++)
    {
     printf(" ");
    }
    for(k=1;k<=i;k++)
    {
        printf("*");
    }
    printf("\n");
  }  
 
    return 0;
}