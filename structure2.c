#include<stdio.h>
struct student{
  int rollnumber;      
  char name[15];       
  char branch[10];     
  float marks;         
};
int main()
{
    int size;
    printf("Enter array size");
    scanf("%d",&size);
   struct student s1[size];  
   for(int i=0;i<2;i++)
   {       
   printf("Enter Roll Number");
   scanf("%d",&s1[i].rollnumber);
   printf("Enter Name");
   scanf("%s",&s1[i].name);
   printf("Enter Branch");
   scanf("%s",&s1[i].branch);
   printf("Enter marks");
   scanf("%f",&s1[i].marks);
   }
   printf("Student's records are\n");
   for(int i=0;i<2;i++)
   {
   printf("%10d %10s %10s %15.2f\n",s1[i].rollnumber,s1[i].name,s1[i].branch,s1[i].marks);
   }
}