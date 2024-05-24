#include<stdio.h>
struct student{
  int rollnumber;      
  char name[15];       
  char branch[10];     
  float marks;         
};
int main()
{
    struct student s1, *ptr;
    ptr=&s1;
    printf("Enter roll number :");
    scanf("%d",&ptr->rollnumber);
    printf("Enter name :");
    fflush(stdin);
    gets(ptr->name);
    printf("Enter branch name :");
    gets(ptr->branch);
    printf("Enter marks :");
    scanf("%d",&ptr->marks);
    printf("Roll Number =%d\n",ptr->rollnumber);
    printf("Name =%s\n",ptr->name);
    printf("Branch =%s\n",ptr->branch);
    printf("Marks =%f\n",ptr->marks);
    return 0;
} 