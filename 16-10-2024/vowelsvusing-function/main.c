/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int vowels(char s[]){
    int count=0,i=1;
    char vw;
    while(s[i] !='\0')
    {
     vw = s[i];
        if(vw =='a' || vw == 'e' || vw == 'i' || vw == 'o' || vw == 'u' ||
            vw == 'A' || vw == 'E' || vw == 'I' || vw == 'O' || vw== 'U') 
            {
              count++;
            }
            i++;
    }
    return count;
}

int main()
{
char s[50];
    printf("Enter a string:");
    gets(s);
    
    printf("Number of vowels: %d\n", vowels(s));
    return 0;
}