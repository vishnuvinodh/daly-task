/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int age;
  printf("enter the age :");
  scanf("%d",&age);
  if(age<=12)
  {
      printf("child");
  }
  else if(age<12 || age<=19)
    {
        printf("teenager");
    }
  else if(age==19 || age<65)
   {
       printf("adult");
   }
   else
   {
       printf("senior");
   }
    return 0;
    
}