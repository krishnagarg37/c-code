#include<iostream>
#include<conio.h>
#define max 20
#include<string.h>
#include<stdlib.h>
using namespace std;
char stack[max][10];
int top=-1;
void push(char x[])
{
   if(top==(max-1) )
     cout<<"Overflow";
   else
    {
       stack[++top]=x;
    }
}
char pop()
{
    if(top==-1)
    { cout<<"Invalid expression";
     return NULL;
    }
    else
     return (stack[top--]);
}

int main()
{
 char a[]={"abc*+d-"};
 int i,j,p1,p2;
 char e1[10],e2[10],sum[5];
 int s=sizeof(a)/sizeof(a[0]);
   s=s-1;
 for(i=0;i<s;i++)
 {
    if(a[i]>='a' && a[i]<='z')
    {
      push(a[i]);
    }
    else if(a[i]=='*')
     {
       e2=pop();
       e1=pop();
       sum[0]='(';
       sum[1]=e1;
       sum[2]='*';
       sum[3]=e2;
       sum[4]=')';
       push(sum);
     }
     else if(a[i]=='+')
     {
       e2=pop();
       e1=pop();
       sum[0]='(';
       sum[1]=e1;
       sum[2]='+';
       sum[3]=e2;
       sum[4]=')';
       push(sum);
     }
	else if(a[i]=='-')
     { e2=pop();
       e1=pop();
       sum[0]='(';
       sum[1]=e1;
       sum[2]='-';
       sum[3]=e2;
       sum[4]=')';
       push(sum);
     }
	else if(a[i]=='/')
     {
        e2=pop();
       e1=pop();
       sum[0]='(';
       sum[1]=e1;
       sum[2]='/';
       sum[3]=e2;
       sum[4]=')';
       push(sum);
     }
	else if(a[i]=='^')
     {
       e2=pop();
       e1=pop();
       sum[0]='(';
       sum[1]=e1;
       sum[2]='^';
       sum[3]=e2;
       sum[4]=')';
       push(sum);
      }
     else
     cout<<"Error in expression\n";
 }
   cout<<"Value="<<stack[top];
   getch();
   return 0;
 }
