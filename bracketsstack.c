 //WAP to check all the brackets in the given expression is balanced or not. (paretheses checking)
// #include<stdio.h>
// #include<string.h>
// int main()
// {   
//     char str[100],stack[100];
//     int top=-1,flag=0;
//     printf("Enter expression");
//     gets(str);
//     int len = strlen(str);
//     for(int i=0;i<len;i++){
//         if(str[i]=='[' || str[i]=='{' || str[i]=='('){
//             stack[++top]=str[i];
//         }
//         else  if(str[i]==']' || str[i]=='}' || str[i]==')')
//         {
//            if(stack[top]=='[')
//            {
//            stack[top]=']';
//            }
//            else if(stack[top]=='{')
//            {
//            stack[top]='}';
//            }
//            else 
//         {
//            stack[top]=')';
//         }
//            if(stack[top]==str[i]){
//            top--;
//            }
//            else
//            {
//             flag=1;
//             break;
//            }
//         }
//     }
//     if(flag==1 || top!=-1){
//         printf("unbalanced\n");
//     }
//     else {
//         printf("balanced\n");
//     }
//     return 0;
// }




#include<stdio.h>
#include<string.h>
int main()
{
    char str[50],stack[50];
    int top=-1,flag=0;
    int len;
    printf("Enter expression \n");
    gets(str);
    len=strlen(str);
    for(int i=0;i<len;i++)
    {
    if(str[i]=='[' || str[i]=='{'|| str[i]=='(')
    {
        stack[++top]=str[i];
    }
    else if(str[i]==']' || str[i]=='}'|| str[i]==')')
    {
        if(stack[top]=='[')
        {
        stack[top]=']';
        }
        else if(stack[top]=='{')
        {
        stack[top]='}';
        }
        else
        {
        stack[top]==')';
        }
        if(stack[top]==str[i])
        {
        top--;
        }
        else
        {
        flag=1;
        break;
        }
    }
}
        if(flag==1 || top!=-1)
        {
            printf("Expression is unbalanced");
        }
        else 
        {
            printf("Expression is balanced");
        }
        return 0;
}