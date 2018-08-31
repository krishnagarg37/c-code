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


node *g[5];
node * create(int d)
{
	node *t=(node *)malloc(sizeof(node));
	t->data=d;
	t->next=NULL;
	return t;
}

bool visited[5]={false,false,false,false,false};

int cycle(int vertex,int parent)
{ 
       visited[vertex]=true;
       node *i=g[vertex];
       while(i!=NULL)
	  {
	     if(visited[i->data]==false)
        { 
		  if(cycle(i->data,vertex) )
	         return 1;
     	}
     	else if(i->data!=parent)
		      return 1;  
	    i=i->next;      
     }
     return 0;
}


void dfs(node *g[],int v)
{
   int i,f=0;
   for(i=0;i<v;i++)
    {
      if(visited[i]==false )
         if(cycle(i,-1))
		    {cout<<"Cycle present";
             f=1;
             break;
		    }
     }
     if(f==0)
      cout<<"cycle not present";
              
}

int main()
{
	int i;
    
	
	g[0]=create(1);
	g[0]->next=create(2);
			
	g[1]=create(0);
		
	g[2]=create(0);
	g[2]->next=create(3);
	g[2]->next->next=create(4);
	
	g[3]=create(4);
	g[3]->next=create(2);
	
	g[4]=create(3);
	g[4]->next=create(2);
			
	for(i=0;i<5;i++)
	{
		 node *t=g[i];
		 cout<<"Node="<<i<<"=";
		 while(t!=NULL)
		 {
		 	cout<<t->data<<" ";
		 	t=t->next;
		 }
		 cout<<"\n";
	}
	cout<<"\n";
	dfs(g,5);
    
 getch(); 
   return 0;
       
 }
 


