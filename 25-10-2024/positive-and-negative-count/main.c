/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,pos=0,neg=0;
   printf("enter the no.of elemenets in array :");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   for(i=0;i<n;i++){
       if(a[i]<0)
       {
          neg++;
       }
       else if(a[i]>0)
       {
           pos++;
       }
   }
   printf("the positive count in array is :%d",pos);
   printf("\n");
   printf("the negative count in array is :%d",neg);
    return 0;
}
