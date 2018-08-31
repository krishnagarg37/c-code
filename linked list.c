#include<stdio.h>
#include<stdlib.h>
struct node
{
	 int data;
	 struct node *next;
};

typedef struct node node;

node *start=NULL;

void create(int x)
{
	 node *t=(node *)malloc(sizeof(node));
	 t->data=x;
	 t->next=NULL;
	 
	 if(start == NULL)
	   start=t;
	 else
	  {
	  	 node *s=start;
	  	 while(s->next!=NULL)
	  	    s=s->next;
	  	 s->next=t;
	  }
	 
}

void display()
{
	 node *s=start;
	 while(s!=NULL)
	  {
	  	 printf("%d->",s->data);
	  	 s=s->next;
	  }
	  printf("NULL");
}

void atbeg(int x)
{
    node *t=(node *)malloc(sizeof(node));
	 t->data=x;
	 t->next=NULL;
	 node *temp=start;
	 t->next=start;
	 start=t;
}
void atpos(int p,int x)
{
	 node *t=(node *)malloc(sizeof(node));
	 t->data=x;
	 t->next=NULL;
	node *temp=start;
	while(temp->data!=p)
	{ 
	   temp=temp->next;
	}
	t->next=temp->next;
	temp->next=t;
	
}
void delatstart()
{
	node *t=start;
	start=start->next;
	free(t);
}
void delatpos(int p)
{
	node *t1=start,*t2;
	while(t1->data!=p)
	{ 
	   t2=t1;
	   t1=t1->next;
	}
	t2->next=t1->next;
	free(t1);
	
}
void delatend()
{
	node *t1=start,*t2;
	while(t1->next!=NULL)
	 {
	 	 t2=t1;
	 	 t1=t1->next;
	 }
	 t2->next=NULL;
	 free(t1);
}
void sort()
{
	 node *t1=start,*t2=start;
	 while(t1->next!=NULL)
	 {
	 	 t2=start;
	 	 while(t2->next!=NULL)
	     {
	 	    
		  if(t2->data>t2->next->data)
	 	   {
	 	   	 int t=t2->data;
	 	   	  t2->data=t2->next->data;
	 	   	  t2->next->data=t;
			}
			t2=t2->next;
	     }
		 t1=t1->next;  
	 
	 }
	 
}
void reverse()
{
	 node *t1=start,*t2=start->next,*t3=t2;
	 while(t3!=NULL)
	 {
	 	 t3=t2->next;
	 	 t2->next=t1;
	 	 t1=t2;
	 	 t2=t3;
	 	 	 	
	 }
	 start->next=NULL;
	 start=t1;
	 
}
void main()
{ 
  int n,i,a;
  scanf("%d",&n);
  for(i=1;i<=n;i++)
      {
      	 scanf("%d",&a);
      	 create(a);
      	     	  
	  }
  display();
  atbeg(7);
  printf("\n");
  display();
  printf("\n");
  atpos(5,1);
  display();
  printf("\n");
  sort();
  display();
  printf("\n");
  reverse();
  display();
  getch();
}
