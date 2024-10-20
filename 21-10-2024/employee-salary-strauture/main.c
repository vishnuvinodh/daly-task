/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

struct employee {
 int id;
 char name[50];
 float salary;
};
int main()
{
  struct employee emy;
  printf("enetr the employee id :");
  scanf("%d",&emy.id);
  getchar();
  printf("enter the name of employee :");
  fgets(emy.name,sizeof(emy.name),stdin);

  printf("enter the salary :");
  scanf("%f",&emy.salary);
  
  emy.salary = emy.salary + (emy.salary * 0.10);
  printf("\n employee details \n");
  printf("employee id:%d\n",emy.id);
  printf("name of employee :%s\n",emy.name);
  printf("update salary(10-prctg):%f\n",emy.salary);

    return 0;
}