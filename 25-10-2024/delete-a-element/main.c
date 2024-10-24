/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int i,n,posi;
   printf("enter the no.of elements in array :");
   scanf("%d",&n);
   int a[n];
   for(i=0;i<n;i++)
   {
       scanf("%d",&a[i]);
   }
   printf("enter the position to delete :");
   scanf("%d",&posi);
   if(posi<1 || posi>n){
       printf("invalid input");
   }
   else{
      for(i=posi-1;i<n-1;i++){
          a[i]=a[i+1];
      }
      n--;
      printf("after delete a element \n");
      for(i=0;i<n;i++){
          printf("%d",a[i]);
      }
      printf("\n");
   }
    return 0;

}