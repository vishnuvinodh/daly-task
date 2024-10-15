/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int power(int bace,int expo){
 int result=1,i;
 for(i=1;i<=expo;i++)
 result =result*bace;
 return result;
 }
int main()
{
 int bace,expo,result;
 printf("enter the bace :");
 scanf("%d",&bace);
 printf("enter the exponet :");
 scanf("%d",&expo);
 result=power(bace,expo);
 printf("%d is the power of %d is %d\n",bace,expo,result);
    return 0;
}