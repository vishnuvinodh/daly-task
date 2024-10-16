/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int check(int a){
    if(a%2==0){
        return 1;
    }
    else{
        return 0;
    }
}

int main()
{
    int a;
  printf("enter a number :");
  scanf("%d",&a);
  if(check(a)==1)
 {
     printf("Even");
 }
 else
 {
     printf("odd");
 } 
  

    return 0;
}
