#include<stdio.h>
#include<stdlib.h>
#define max 1

int top=-1;
int stack[max];
void push(int x)
{ 
  if(top==max)
    printf("Stack overflow\n");
  else
  {
    stack[++top]=x;
    printf("Element pushed into stack\n");
  }
}
void pop()
{ 
   if(top==-1)
     printf("stack underflow\n");
   else
     {
	 printf("Element popped out %d\n",stack[top]); 
	 top--;
     }
}
void main()
{
	 int ch;
	 while(1)
	 {
	 	 printf("1.push\n2.pop\n3.display\n4.exit\n");
	 	 scanf("%d",&ch);
	 	 switch(ch)
	 	 {
	 	 	 case 1:  {printf("\nEnter Element\n");
	 	 	 	         int x;
	 	 	 	        scanf("%d",&x);
	 	 	 	        push(x);
				     	break;
			         }
			 case 2:
			 	    {
			 	    	pop();
			 	    	break;
					 }
			 case 3:
			 	     {
			 	     	 int i;
			 	     	 for(i=0;i<=top;i++)
			 	     	  printf("%d ",stack[i]);
			 	     	  printf("\n");
			 	     	 break;
					  }
			 case 4:
			 	 {
			 	 	 exit(-1);
			 	 	 break;
				  }
		  }
	 }
	 getch();
}
