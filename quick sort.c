#include<stdio.h>

void swap(int *a,int x,int y)
{
	int temp;
	temp=a[x];
	a[x]=a[y];
	a[y]=temp;
}
void quicksort(int *a,int first,int last)
{
	int k;
	 int pivot,i,j;
	 if(first<last)
	 {
	 	 i=first;
	 	 j=last;
	 	 pivot=(i+j)/2;
	 	 printf("pivot%d\n",a[pivot]);
	 	 printf("\nj=%d\n",j);
	   while(i<j)
	   {
          
	 	 while(a[i]<=a[pivot]&& i<last)
	 	      i++;
	 	 while(a[j]>a[pivot])
	          j--;
	     if(i<j)
	     {
	     	 swap(a,i,j);
		 }
		 
		  for(k=0;k<7;k++)
     	 printf("%d ",a[k]);
      	 printf("\n");
      	 printf("\nj=%d\n",j);
	   }
      
    swap(a,j,pivot);
    for(k=0;k<7;k++)
	 printf("%d ",a[k]);
	 printf("\nj=%d\n",j);
    quicksort(a,first,j-1);
    quicksort(a,j+1,last);         
   }	 
}

void main()
{
	int i,a[]={5,8,4,6,4,3,1};
	for(i=0;i<7;i++)
	 printf("%d ",a[i]);
	printf("\n");
	quicksort(a,0,6);
	for(i=0;i<7;i++)
	 printf("%d ",a[i]);
}

