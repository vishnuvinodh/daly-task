/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include<string.h>
struct student{
    int stid;
    char name[100];
    int age;
};
struct student st[100];
 int stcount=0;
void addStudent(){
    printf("enter the student id :");
    scanf("%d",&st[stcount].stid);
    printf("enter the student name :");
    getchar();
    fgets(st[stcount].name,sizeof(st[stcount].name),stdin);
    st[stcount].name[strcspn(st[stcount].name,"\n")]='\0';
    printf("enter the age :");
    scanf("%d",&st[stcount].age);
    stcount++;
    printf("student added successfully");
}
void displayStudent(){
    if(stcount==0){
        printf("no stuent in this id");
        return;
    }
    printf("\n avilable student are \n");
    for(int i=0;i<stcount;i++)
    {
        printf("student id:%d\n",st[i].stid);
        printf("name :%s\n",st[i].name);
        printf("age :%d\n",st[i].age);
        printf("-----------------------\n");
    }
    
}
void deleteStudent(){
    int id,found=0;
    printf("enter the student id to delete :");
    scanf("%d",&id);
    for(int i=0;i<stcount;i++)
    {
    if(st[i].stid==id){
        found=1;
        for(int j=i;j<stcount;j++){
           st[j]=st[j+1]; 
        }
      stcount--;
      break;
    }
    }
    if(!found){
       printf("the student with id %d is not foundf \n",id); 
    }
}
void findStudent(){
    int id,found=0;
    printf("enter the idof student to find ");
    scanf("%d",&id);
    for(int i=0;i<stcount;i++)
    {
        if(st[i].stid==id){
            found=1;
        printf("student id:%d\n",st[i].stid);
        printf("name :%s\n",st[i].name);
        printf("age :%d\n",st[i].age);
        break;
        }
    }
    if(!found){
        printf("the student with id %d is not found\n",id);
    }
    
}
int main()
{
 int choice;
 do{
     printf("\n student management system \n");
     printf("-----------------------------\n");
     printf("1) Add a student \n");
     printf("2) display all student \n");
     printf("3) delete student by id \n");
     printf("4) find student \n");
     printf("exit \n");
     printf("enter your choice :");
     scanf("%d",&choice);
     switch(choice){
           case 1: addStudent();
                break;
           case 2: displayStudent();
                break;
            case 3: deleteStudent();
                 break;
            case 4: findStudent();
                 break;
            case 5:printf("exit from the program \n");
                 break;
            default :printf("invalid input");
       }
       
 }while(choice != 5);

    return 0;
}