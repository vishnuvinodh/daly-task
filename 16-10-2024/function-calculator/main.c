/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int calculator(int a,int b,char operator){
  int result;
 switch (operator)
 {
    case'+': result= a+b;
             break;
    case'-' :result= a-b;
             break;
    case'*' :result= a*b;
              break;
    case'/' :if(b==0)
            {
                printf("division by zero is not posible");
                return 0;
            }
          result= a/b;
              break;
    default:printf("wrong input");
 }
    return result;
 }
int main()
{
  int a,b;
  char operator;
  printf("enter the first number :");
  scanf("%d",&b);
  
  printf("Enter the operator (+, -, *, /): ");  
  scanf(" %c", &operator);
  
  printf("enter the second numere : ");
  scanf("%d",&b);
  
  int result = calculator(a,b,operator);
  if(result!=0)
  {
      printf("Result: %d\n", result);
  }
  
    return 0;
}
