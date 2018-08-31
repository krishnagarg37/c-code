#include<stdio.h>
#include<stdlib.h>

struct node 
{
	 int d;
	 struct node *next;
};

typedef struct node node;

node *head=NULL;

void insert(int x)
{ 
   node *t=(node *)malloc(sizeof(node));
   t->d=x;
   t->next=head;
   
   if(head==NULL)
     {head=t;
      t->next=head;
     } 
   else
   {
   	   node *te=head;
   	   while(te->next!=head)
   	   {
   	   	  te=te->next;
		  }
	   te->next=t;
	   	  
   }
   
}
void in5()
{
	 node *t=(node *)malloc(sizeof(node));
    t->d=5;
    t->next=NULL; 
	 node *t1=head,*t2;
	 while(t1->d<=5 && t1->next!=head)
	 {
	 	 t2=t1;
	 	 t1=t1->next;
	 }
	 t2->next=t;
	 t->next=t1;
	 
}

void print()
{
	 node *t=head;
	 while(t->next!=head)
	 {
	 	 printf("%d ",t->d);
	 	 t=t->next;
	 }
}
void main()
{
	 int x=1;
	 while(x)
	 {
	 	 scanf("%d",&x);
	 	 insert(x);
	 }
	 in5();
	 print();
	 
}
