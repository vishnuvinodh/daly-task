/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct rectangle{
  int length;
  int width;
};
int area(struct rectangle r){
    return r.length * r.width;
}
int main()
{
 struct rectangle r;
 printf("enter the length of rectangle :");
 scanf("%d",&r.length);
 printf("enter the width of rectangle :");
 scanf("%d",&r.width);
 printf("the area of the rectangle is :%d",area(r));

    return 0;
}
