//#include<stdio.h>
#include<stdlib.h>
#include<iostream>
#include<stack>
using namespace std;

int n=4;
int m=3;
int time=30;
int beauty[]={5,10,15,20};
int u[]={0,1,0};
int v[]={1,2,3};
int t[]={6,7,10};

struct node
{
	 int data;
	 struct node *next;
	 int w;
};
typedef struct node node;

void insert(node *a[],int x,int y,int z)
{
	 node *t=(node *)malloc(sizeof(node));
	 t->data=y;
	 t->w=z;
	 t->next=NULL;
	 
	 if(a[x]==NULL)
	   a[x]=t;
	 else
	  { 
	    node *temp=a[x];
	    while(temp->next!=NULL)
	     {
	     	 temp=temp->next;
		 }
		 temp->next=t;
	  }
}
int arr[]={0,0,0,0};

void path(node *a[],int i)
{
	  stack <int> s;
	  s.push(0);
	  int b=0,t=0;
	  
	  if(arr[s.top]==0)
	{
		arr[i]=1; 
        node *t=a[i];
		while(t!=NULL)
		{
			if(arr[t->data]!=0)
			   s.push(t->data);
			t=t->next;			 
			 
		}	  	 
	  }
	  
}

void main()
{
    node *a[n];
    int i;
    for(i=0;i<n;i++)
        a[i]=NULL;
    for(i=0;i<m;i++)
    {
    	 insert(a,u[i],v[i],t[i]);
    	 insert(a,v[i],u[i],t[i]);
	}
	
	for(i=0;i<n;i++)
	{
		 printf("%d->",i);
		 node *t=a[i];
		 while(t!=NULL)
		 {
		 	 printf("%d(%d) ",t->data,t->w);
		 	 t=t->next;		 	 
		 }
		 printf("\n");
	}
	getch();	  
 }





