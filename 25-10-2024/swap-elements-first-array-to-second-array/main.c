/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
 int i,n;
 printf("enter thr no.of elements in array :");
 scanf("%d",&n);
 int a[n],b[n];
 printf("enter the elements of first array :");
 for(i=0;i<n;i++){
     scanf("%d",&a[i]);
 }
for(i=0;i<n;i++){
    b[i]=a[i];
}
printf("the second array elements are :");
for(i=0;i<n;i++)
{
    printf("%d",b[i]);
}
    return 0;
}