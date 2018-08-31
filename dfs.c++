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

void dfs(node *g[])
{
 stack <int> s;
 s.push(1);
 bool a[6]={false,false,false,false,false,false};
 int i,f;
 while(1)
 {
   f=1;
   for(i=0;i<6;i++)
    {
	 if(a[i]==false)
     {
        f=0;
        break;
       }
     }
  if(f==0)
   {
      int t=s.top();
   	  s.pop();
      if(a[t-1]==false)
        {
          a[t-1]=true;
          cout<<t<<" ";
          node *te=g[t-1];
          while(te!=NULL)
          {
             s.push(te->data);
             te=te->next;
            }
        }
      
     }
  else
    break;
    
 }
}

int main()
{
	int i;
    node *g[6];
	
	g[0]=create(2);
	g[0]->next=create(3);
		
	g[1]=create(1);
	g[1]->next=create(4);
	g[1]->next->next=create(5);
	
	g[2]=create(1);   
	g[2]->next=create(5);
		
	g[3]=create(2);
	g[3]->next=create(5);
	g[3]->next->next=create(6);
	
    g[4]=create(3);
	g[4]->next=create(2);
	g[4]->next->next=create(4);   
	g[4]->next->next->next=create(6);
	
	g[5]=create(4);   
	g[5]->next=create(5);   
		
	for(i=0;i<4;i++)
	{
		 node *t=g[i];
		 cout<<"Node="<<i+1<<"=";
		 while(t!=NULL)
		 {
		 	cout<<t->data<<" ";
		 	t=t->next;
		 }
		 cout<<"\n";
	}
	cout<<"\n";
	dfs(g);
    
 getch(); 
   return 0;
       
 }
 
