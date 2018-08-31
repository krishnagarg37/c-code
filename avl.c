#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

int arr[4],i=0;
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
  node *ne=(node *)malloc(sizeof(node));
  ne->data=d;
  ne->l=NULL;
  ne->r=NULL;
  return ne;
 }
void insert(node *ne)
{
 if(root==NULL)
    root=ne;
  else
   {
     node *temp=root;
   while(1)
   {
     if(temp->data <= ne->data)
       {
	if(temp->r==NULL)
	  {temp->r=ne;break;}
	else
	  temp=temp->r;
	}
     else
     {
	if(temp->l==NULL)
	 { temp->l=ne;break;}
	else
	  temp=temp->l;
      }
   }
  }
}
void inorder(node *ro)
{
   if(ro!=NULL)
    {
      inorder(ro->l);
      printf("%d ",ro->data);
      arr[i++]=ro->data;
      inorder(ro->r);
      }
 }

void fun(int l,int h)
{
	int mid=(l+h)/2;
	if(l<h)
	{
		printf("%d ",arr[mid]);
		fun(l,mid);
		fun(mid+1,h);
	}
	 
}

void main()
{
  int a,h,n,j;
  printf("Enter the values to enter in tree\n");
  scanf("%d",&a);
  while(a!=-1)
  {
     node *te=create(a);
     insert(te);
     scanf("%d",&a);

  }
  inorder(root);
  printf("\n");
 fun(0,5);
  
  getch();

}
