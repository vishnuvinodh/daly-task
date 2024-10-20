/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
struct date{
    int day;
    int month;
    int year;
};
int main()
{
 struct date d1;
 struct date d2;
 printf("enter the first date in Day - month - year :");
 scanf("%d%d%d",&d1.day,&d1.month,&d1.year);
 
 printf("enter the second date in Day - month - year :");
 scanf("%d%d%d",&d2.day,&d2.month,&d2.year);
 
 if(d1.year<d2.year || d1.month<d2.month || d1.day<d2.day)
 {
     printf("the first date will early come");
 }
 else if(d1.year==d2.year || d1.month==d2.month || d1.day==d2.day)
 {
     printf("the dates are same");
 }
 else
 {
     printf("the second date will come early");
 }
    return 0;
}
