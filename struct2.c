#include<stdio.h>
struct student{
  int rollnumber;      
  char name[15];       
  char branch[10];     
  float marks;         
};
int main()
{
   struct student s1;         
   printf("Enter Roll Number");
   scanf("%d",&s1.rollnumber);
   printf("Enter Name");
   fflush(stdin);
   gets(s1.name);
   printf("Enter Branch");
   gets(s1.branch);
   printf("Enter marks");
   scanf("%f",&s1.marks);
   printf("Roll Number =%d\n",s1.rollnumber);
   printf("Name =%s\n",s1.name);
   printf("Branch =%s\n",s1.branch);
   printf("Marks =%f\n",s1.marks);
   struct student s2;         
   printf("Enter Roll Number Of Another student");
   scanf("%d",&s2.rollnumber);
   printf("Enter Name of second student");
   fflush(stdin);
   gets(s2.name);
   printf("Enter Branch of student 2");
   gets(s2.branch);
   printf("Enter marks of Second Student");
   scanf("%f",&s2.marks);
   printf("Roll Number =%d\n",s2.rollnumber);
   printf("Name =%s\n",s2.name);
   printf("Branch =%s\n",s2.branch);
   printf("Marks =%f\n",s2.marks);
}  