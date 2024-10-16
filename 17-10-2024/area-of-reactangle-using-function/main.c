/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
float triangle(float len,float wid)
{
   float area=len*wid;
   return area;
}
int main()
{
  float len,wid;
  printf("enter the length of rectangle :");
  scanf("%f",&len);
  printf("enter the width of rectangle :");
  scanf("%f",&wid);
 printf("area of trianglr is :%f",triangle(len,wid));   
 return 0;
}