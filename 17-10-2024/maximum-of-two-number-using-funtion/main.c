/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int maxi(int a,int b){
    if(a>b)
    {
     return a;
    }
    else
    {
        return b;
    }
}
int main()
{
 int a,b;
 printf("enter the first number :");
 scanf("%d",&a);
 printf("enter the second numnber :");
 scanf("%d",&b);
 if(maxi(a,b)==a)
 {
  printf(" the largest number is :%d",a);
 }
 else
 {
  printf("the largest number is :%d",b );
 }
 
    return 0;
}