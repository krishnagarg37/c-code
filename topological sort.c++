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
bool a[6]={false,false,false,false,false,false};
node *g[6];
 
void traverse(int v)
{ 
     node *t=g[v];
     if(a[v]==false && t==NULL)
       s.push(v);
     while(t!=NULL)
    {
        if(a[t->data]==false)
           {
             a[t->data]=true;
             traverse(t->data);
             s.push(t->data);
           }
           t=t->next;
       
   }
}
void dfs()
{
 int i;
  traverse(5);
   for(i=0;i<6;i++)
    {
	 if(a[i]==false)
       traverse(i);
  
     }
     
  while(!s.empty())
  {
    cout<<s.top()<<" ";
    s.pop();
  }
  
}

int main()
{
	int i;
   
   	g[0]=NULL;
			
	g[1]=NULL;
	
	g[2]=create(3);   
			
	g[3]=create(1);
		
    g[4]=create(0);
	g[4]->next=create(1);
		
	g[5]=create(0);   
	g[5]->next=create(2);   
		
	for(i=0;i<6;i++)
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
	dfs();
    
 getch(); 
   return 0;
       
 }
 

