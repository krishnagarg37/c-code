#include<stdio.h>
#include<stdlib.h>
void swap(int *a,int *b)
{
  int temp=*a;
  *a=*b;
  *b=temp;  	
}
void maxheap(int *a,int s)
{
	int mid=s/2,i,j;
	
	  for(i=mid;i>=1;i--)
	  {
	  	int left;
	  	int right;
	  	if(i==mid && s%2==0)
	  	 {left=2*i;
	  	   right=0;
	    }
		else
		{
			right=2*i+1;
			left=right-1;
		}
		 
	    	  	
		if(a[i]<a[left] && right==0)
	  	    {
			  swap(&a[i],&a[left]);
			  
		    }
	    else
	  	{
	  		if(a[right]<a[left])
	  		 {
			   if(a[left]>a[i])
			   {
			    swap(&a[i],&a[left]);
				i=mid;
				}
		     } 
	  		
	  		else
			   	{
				 if(a[right]>a[i])
			      {
				  swap(&a[i],&a[right]);
				  i=mid;
				  }
		     	}
		  }
	  }
}

void minheap(int *a,int s)
{
	int mid=s/2,i,j;
	
	  for(i=mid;i>=1;i--)
	  {
	  	int left;
	  	int right;
	  	if(i==mid && s%2==0)
	  	 {left=2*i;
	  	   right=0;
	    }
		else
		{
			right=2*i+1;
			left=right-1;
		}
		 
	    	  	
		if(a[i]>a[left] && right==0)
	  	    {
			  swap(&a[i],&a[left]);
			
		    }
	    else if(right!=0)
	  	{
	  		if(a[right]>a[left])
	  		 {
			   if(a[left]<a[i])
			   {
			    swap(&a[i],&a[left]);
				i=mid;
				}
		     } 
	  		
	  		else
			   	{
				 if(a[right]<a[i])
			      {
				  swap(&a[i],&a[right]);
				  i=mid;
				  }
		     	}
		  }
	  }
}
void main()
{
	 int heap[11]={0,40,60,10,20,50,30,100,200,25,5};
	 int i;
	 for(i=1;i<=10;i++)
	   printf("%d ",heap[i]);
	 printf("\nMax Heap=\n");
	 
	 maxheap(heap,10);
	 
	 for(i=1;i<=10;i++)
	   printf("%d ",heap[i]);
	   
    printf("\nMin Heap=\n");
    
	minheap(heap,10);
	for(i=1;i<=10;i++)
	   printf("%d ",heap[i]);
	
 getch();	 
}
