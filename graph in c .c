#include<stdio.h>
#include<stdlib.h>
//#include<queue>
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
void main()
{
	int i;
    node *g[4];
	
	g[0]=create(2);
	g[0]->next=create(3);
	g[0]->next->next=create(4);
	
	g[1]=create(1);   
	g[1]->next=create(3);
	g[1]->next->next=create(4);
	
	g[2]=create(1);   
	g[2]->next=create(2);
	g[2]->next->next=create(4);
	
	g[3]=create(2);   
	g[3]->next=create(1);
	g[3]->next->next=create(3);	
	
	for(i=0;i<4;i++)
	{
		 node *t=g[i];
		 printf("Node=%d=",i+1);
		 while(t!=NULL)
		 {
		 	printf("%d ",t->data); 
		 	t=t->next;
		 }
		 printf("\n");
	}
    
 getch(); 
       
 }
 
