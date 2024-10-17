/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int a[100],i,n;
 printf("enter the number of elements :");
 scanf("%d",&n);
 for(int i=0;i<n;i++)
 {
    scanf("%d",&a[i]);
 }
 printf("THE ARRAY ELEMENTS ARE :\n");
 for(i=0;i<n;i++)
 {
     printf("%d ",a[i]);
 }

    return 0;
}