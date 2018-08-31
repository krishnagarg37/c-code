#include<iostream>
#include<cstdlib>
#include<stack>
#include<conio.h>
using namespace std;

struct node
{
	int data;
	struct node *next;
	int w;
};
typedef struct node node;

node * create(int d,int we)
{
	node *t=(node *)malloc(sizeof(node));
	t->data=d;
	t->w=we;
	t->next=NULL;
	return t;
}

void insert(int s,int d,int w,node *m[])
{
   if(m[s]==NULL)
    m[s]=create(d,w);
   else
    {
      node *t=m[s];
      while(t->next!=NULL)
          t=t->next;
    
      t->next=create(d,w);
   }
}

node *g[9];
node *mst[9];
int weight[14],src[14],dest[14];
int a[9]={0,0,0,0,0,0,0,0,0};
int sum=0;
void sort()
{
    int i,j,t1,t2,t3;
    for(i=0;i<14;i++)
    {
      for(j=0;j<13;j++)
      {
        if(weight[j]>weight[j+1])
        {  
		   t1=weight[j];
           weight[j]=weight[j+1];
           weight[j+1]=t1;
           
           t2=src[j];
           src[j]=src[j+1];
           src[j+1]=t2;
           
           t3=dest[j];
           dest[j]=dest[j+1];
           dest[j+1]=t3;
        }
     }
   } 
}  
void traverse(node *g[])
 {
 	int i,j=0;
 	for(i=0;i<9;i++)
 	{
 		a[i]=1;
 	    node *t;
 	    t=g[i];
 	     
 	    while(t!=NULL)
 	    {
 	     if(a[t->data]==0)
 	     	{
				weight[j]=t->w;
 	    	 	src[j]=i;
 	    	 	dest[j]=t->data;
 	    	 	j++;
 	        }
		    t=t->next;
	    }
 		
	 }
	  
	 sort();
	 
	 cout<<"weight\tsource\tdestination\n";
	 for(i=0;i<14;i++)
	 cout<<weight[i]<<"\t"<<src[i]<<"\t"<<dest[i]<<"\n";
 }
 
int parent[9]={-1,-1,-1,-1,-1,-1,-1,-1,-1};
int visit[9]={0,0,0,0,0,0,0,0,0};

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
 
void kruskals()
{
    int i=0,ed=8,j;
    for(i=0;i<ed;i++)
     {   
        if(find(src[i])!=find(dest[i]) )
		 {
		  insert(src[i],dest[i],weight[i],mst);
		  insert(dest[i],src[i],weight[i],mst);
          un(src[i],dest[i]);
         }
         else
         {
           ed++;
         }
    }
   for(i=0;i<9;i++)
    {
	   node *t=mst[i];
	    visit[i]=1;
	   while(t!=NULL)
	  {
	     if(visit[t->data]==0)
	      {
	        sum=sum+t->w;
	       }
	      t=t->next;
    	}
     } 

}
int main()
{
	int i;
   
   	g[0]=create(1,4);
   	g[0]->next=create(7,8);
			
	g[1]=create(0,4);
	g[1]->next=create(7,11);
	g[1]->next->next=create(2,8);
		
	g[2]=create(1,8);
	g[2]->next=create(8,2);
	g[2]->next->next=create(5,4);
	g[2]->next->next->next=create(3,7);
				
	g[3]=create(2,7);
	g[3]->next=create(5,14);
	g[3]->next->next=create(4,9);
	
		
    g[4]=create(3,9);
	g[4]->next=create(5,10);
		
	g[5]=create(6,2);
	g[5]->next=create(2,4);
	g[5]->next->next=create(3,14);
	g[5]->next->next->next=create(4,10); 
	
	g[6]=create(7,1);
	g[6]->next=create(8,6);
	g[6]->next->next=create(5,2);
	
	g[7]=create(0,8);
	g[7]->next=create(1,11);
	g[7]->next->next=create(8,7);
	g[7]->next->next->next=create(6,1);
	
	g[8]=create(2,2);
	g[8]->next=create(7,7);
	g[8]->next->next=create(6,6);
	
	for(i=0;i<9;i++)
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
	traverse(g);
	kruskals();
	cout<<"\n";
	for(i=0;i<9;i++)
	{
		 node *t=mst[i];
		 cout<<"Node="<<i<<"=";
		 while(t!=NULL)
		 {
		 	cout<<t->data<<" ";
		 	t=t->next;
		 }
		 cout<<"\n";
	}
	cout<<"\nmst="<<sum;
	getch();
	return(0);
}
