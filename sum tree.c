#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
  int data;
  struct node *l;
  struct node *r;
};
typedef struct node node;

node *root=NULL;
node *temp=NULL;

node * create(int d)
{
  node *ne=malloc(sizeof(node));
  ne->data=d;
  ne->l=NULL;
  ne->r=NULL;
  return ne;
 }

void inorder(node *ro)
{          
   if(ro!=NULL)
    {
      inorder(ro->l);
      printf("%d ",ro->data);
      inorder(ro->r);
      }
 }

int sum_tree(node * root)
{
     int s1=0,s2=0;	 
      
	  if(root==NULL)
        return 0;
    else if  (root->l==NULL  && root->r==NULL )
       return root->data;
     else
  {
          s1=sum_tree(root->l) ;       
          s2=sum_tree(root->r);
          
          if((s1+s2)==root->data)
             {            
                 return s1+s2+root->data;
             } 
          else
          return 0;
   }
}
int doo(node *ptr)
{
	 int value=0;
	 if(ptr!=NULL)
	  {
	  	  if(ptr->l!=NULL)
	  	   value=1+doo(ptr->l);
	  	   if(ptr->r!=NULL)
	  	    value=value>(1+doo(ptr->r))?value:1+doo(ptr->r);
	  }
	  return (value);
}
void main()
{
  int a,h,n,j;
  printf("Enter the values to enter in tree\n");
  root=create(26);
  root->l=create(10);
  root->r=create(3);
  root->l->l=create(4);
  root->l->r=create(6);
  root->r->r=create(3);
  inorder(root);
  printf("\n");
  if( (2*root->data)==sum_tree(root))
  printf("Sum tree");
  else
  printf("Not a sum tree");
  
  printf("%d",doo(root));
  getch();
}
