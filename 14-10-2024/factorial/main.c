/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, 
Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
  int n,i,fact=1;
  printf("Enter a number :");
  scanf("%d",&n);
  if(n>0)
  {
	for(i=1; i<=n; i++)
	{
		fact=fact*i;
	}
  }
	else
	{
		printf("Enter a valid number");
	}
	printf("The factorial is %d :",fact);
   
    return 0;
}
