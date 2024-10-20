/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
struct books{
 char title[100];
 char author[50];
 float price;
};
int main()
{
 struct books book[3];
 int i,higestprice=0;
 for(i=0;i<3;i++)
 {
     printf("enter the details of book %d:\n",i+1);
     printf("title :");
     getchar();
     fgets(book[i].title,sizeof(book[i].title), stdin);
     printf("author :");
     fgets(book[i].author,sizeof(book[i].author), stdin);
     printf("price :");
     scanf("%f",&book[i].price);
 }
 for(i=1;i<3;i++)
 {
     if(book[i].price>book[higestprice].price){
         
     }
     higestprice=i;
 
 }
  printf("\n the boock wit highst price :\n");
   printf("title : %s", book[higestprice].title);
   printf("author : %s", book[higestprice].author);
   printf("price : %f", book[higestprice].price);
    return 0;
}