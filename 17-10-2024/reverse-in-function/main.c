/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int rev(int n)
{
  int reverse=0;
  while(n!=0)
  {
      int rem=n%10;
      reverse=reverse*10+rem;
      n/=10;
  }
  return reverse;
  
}
int main()
{
  int n;
  printf("enter a number :");
  scanf("%d",&n);
  printf("reverse of number is :%d\n",rev(n));
    return 0;
}
