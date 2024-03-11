#include<stdio.h>
//#pragma pack(1)
struct student{
  int rollnumber;      //4 byts
  char name[15];       //30 bytes
  char branch[10];     //10 bytes
  float marks;         //4 bytes
};
int main()
{
   struct student s1={120001,"Piyush","IT",345.23};         
   //printf("Size of s1=%d",sizeof(s1));
   printf("Roll Number =%d\n",s1.rollnumber);
   printf("Name =%s\n",s1.name);
   printf("Branch =%s\n",s1.branch);
   printf("Marks =%f\n",s1.marks);
}                                                                         