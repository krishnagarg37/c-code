#include<iostream>
#include<cstdlib>
#include<conio.h>
using namespace std;
struct node
{
	int data;
	struct node *next;
};
typedef struct node node;

node *create(int d)
{
	node *t=(node *)malloc(sizeof(node));
	t->data=d;
	t->next=NULL;
	return t;
}
int parent[3]={-1,-1,-1};
int visit[3]={0,0,0};

int find(int x)
{
      if(parent[x]==-1)
          return x;
      else
         {
            find(parent[x]);
          }
    
}
void un(int x,int y)
{

 if(parent[x]==-1)
    parent[x]=y;  
 else
    un(parent[x],y);
              
}

void traverse (node *g[],int n)
{
    int i=0,f=0;
    while(i<n)
   {   
       visit[i]=1; 
       node *t=g[i];
       while(t!=NULL)
     {
          //cout<<"x="<<find(i)<<" y="<<find(t->data)<<"\n";
		  if(visit[t->data]==0)
          if(find(i)==find(t->data))
         {
           cout<<"cycle detected";
            f=1;
            break;
         }

          else
             un(i,t->data);
          
        t=t->next;
     }//inner loop
     i++;
     
     if(f==1)
      break;
     
    }//outer loop
   if(f==0)
     cout<<"No cycle present";   
	 
   
 }

int main()
{ 
   node *g[3];
  g[0]=create(1);
  g[0]->next=create(2);
			
  g[1]=create(0);
 // g[1]->next=create(2);
		
  g[2]=create(0);
  //g[2]->next=create(1);
		
 traverse(g,3); 
 getch(); 
 return 0;      
 }
 
