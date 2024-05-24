#include<stdio.h>
int top1=-1,top2=-1;
char operator[100];
int operand[100];
void Process()
{
    int x=operand[top1--];
    int y=operand[top1--];
    char op= operator[top2--];
    int z;
    switch(op){
        case '+':
        z=y+x;
        break;
         case '-':
        z=y-x;
        break;
         case '*':
        z=y*x;
        break;
         case '/':
        z=y/x;
        break;
    }
    operand[++top1]=z;
}
int Precedence(char op){
    switch(op){
            case '+':
            case '-':
            return 1;
            case '*':
            case '/':
            return 2;
            default:
            return 0;
    }
}
int evalInfixExpression(char *str)
{
    int i;
    for(i=0;str[i]!='\0';i++){ //logic of strlen function
    char ch=str[i];
    if(ch>=48 && ch<=57)
    operand[++top1]=ch-48;
    else if(ch=='+' || ch=='-' || ch=='*' || ch=='/'){
          if(top2==-1)
          operator[++top2]=ch;  //logic for typecasting
          else{
            while(top2!=-1 && Precedence(ch)<=Precedence(operator[top2]))
            {
                Process();
            }
            operator[++top2]=ch;
          }
    }
    else if(ch=='(')
    {
        operator[++top2]==ch;
    }
    else if(ch==')')
    {
        while(operator[top2]!='(')
        {
            Process();
        }
        top2--;
    }
    }
   while(top2!=-1)
   {
    Process();
   }
   return operand[top1--];
}
int main()
{
   int result = evalInfixExpression("9/3");
   printf("%d",result);
   return 0;
}