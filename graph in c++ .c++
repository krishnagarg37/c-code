#include<iostream>
#include<cstdlib>
#include<stack>
#include<conio.h>

using namespace std;

struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

node * create(int d)
{
	node *t=(node *)malloc(sizeof(node));
	t->data=d;
	t->next=NULL;
	return t;
}

stack <int> s;
int a[]={0,0,0,0,0,0};

void dfs(node *g[])
{     
      int i;
      s.push(1);
      
 while(1)
     {          
       for(i=0;i<6;i++)
          if(a[i]==0)
             break;
                 
	   if(i==6)
		 break;
		 
	    else
		{
		  int top=s.top();
		  node *t=g[top-1];
		  
		  if(a[top-1]==0)
		    {
		       a[top-1]=1;
		       printf("%d ",top);
		       while(t!=NULL)
		        {
		          if(a[t->data-1]==0)
		             s.push(t->data);
		          t=t->next;
		         }
		        
		     }
		    else
		        s.pop();
      	}
     }
}
int main()
{
    node *g[6];

    g[0]=create(3);
    g[0]->next=create(2);
    
	g[1]=create(1);
	g[1]->next=create(4);
	g[1]->next->next=create(5);
	
	g[2]=create(1);
	g[2]->next=create(5);
	
	g[3]=create(2);   
	g[3]->next=create(5);
    g[3]->next->next=create(6);
	  
    g[4]=create(2);   
	g[4]->next=create(4);
    g[4]->next->next=create(6);
	  
    g[5]=create(4);
	g[5]->next=create(5);

    int i;
	node *t;
	for(i=0;i<6;i++)
	 {
	    t=g[i];
	    printf("%d->",i+1);
		while(t!=NULL)
		{
		   printf("%d->",t->data);
		   t=t->next;
	     }
	     printf("NULL\n");
	 
      }
      printf("\n");
      dfs(g);
 getch(); 
   return 0;    
 }
 
