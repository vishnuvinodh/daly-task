/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <string.h>
void main()
{
    int l,i;
    char s[30],c;
    printf("Enter a string :");
    gets(s);
    l = strlen(s);
    for(i=0;i<l/2;i++)
    {
        c = s[i];
        s[i] = s[l-1-i];
        s[l-1-i] = c;
    }
    printf(" reverse of the string is %s\n",s);
}
