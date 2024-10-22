/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct  book{
    int bkid;
    char title[100];
    char author[100];
    float price;
};
struct book lb[100];
    int bkcount=0;
    
void addbook(){
  printf("enter the book id :");
  scanf("%d",&lb[bkcount].bkid);
  printf("enter the book title :");
  getchar();
   fgets(lb[bkcount].title, sizeof(lb[bkcount].title), stdin);
 lb[bkcount].title[strcspn(lb[bkcount].title, "\n")] = '\0';
  printf("enetr the author :");
  fgets(lb[bkcount].author,sizeof(lb[bkcount].author),stdin);
  lb[bkcount].author[strcspn(lb[bkcount].author,"\n")]='\0';
  printf("enter the price :");
  scanf("%f",&lb[bkcount].price);
  bkcount++;
  printf("book added successfully \n");
  
}
void displaybook(){
    if(bkcount==0)
    {
        printf("no book in library.\n");
        return;
    }
    printf("\n book avialble in library \n");
    for(int i=0;i<bkcount;i++)
    {
    printf("book id:%d\n",lb[i].bkid);
    printf("title :%s\n",lb[i].title);
    printf("author :%s\n",lb[i].author);
    printf("price :%f\n",lb[i].price);
    printf("----------------------------\n");
    } 
}
void deletebook(){
    int id,found=0;
    printf("enter the book id to delete : ");
    scanf("%d",&id);
    for(int i=0;i<bkcount;i++)
    {
        if(lb[i].bkid==id){
            found=1;
            for(int j=0;j<bkcount;j++)
            {
                lb[j]=lb[j+1];
            }
            bkcount--;
            printf("the boo successfully delete");
            break;
        }
    }
    if(!found){
        printf("the book id of %d is not found.\n",id);
    }
}
void findbook(){
    int id,found=0;
    printf("enter id to found :");
    scanf("%d",&id);
    for(int i=0;i<bkcount;i++)
    {
        if(lb[i].bkid==id){
            found=1;
            printf("id :%d\n",lb[i].bkid);
            printf("title :%s\n",lb[i].title);
            printf("author :%s",lb[i].author);
            printf("price :%f\n",lb[i].price);
            break;
        }
    }
    if(!found){
        printf("the book id of %d is not found.\n",id);
    }
}
int main()
{
   int choice;
   do{
       printf("\n library management \n");
       printf("----------------------------\n");
       printf("1) Add a new book \n");
       printf("2) display all book \n");
       printf("3) delete book by id \n");
       printf("4) find book \n");
       printf("exit \n");
       printf("enter your choice :");
       scanf("%d",&choice);
       
       switch(choice){
           case 1: addbook();
                break;
           case 2: displaybook();
                break;
            case 3: deletebook();
                 break;
            case 4: findbook();
                 break;
            case 5:printf("exit from the program \n");
                 break;
            default :printf("invalid input");
       }
     
   } while(choice!=5);
    return 0;
}
