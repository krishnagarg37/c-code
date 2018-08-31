#include<stdio.h>

void main()
{
	int a[]={8,4,5,6,2};
	
	int r,i,j,t;
	scanf("%d",&r);
	
	for(i=1;i<=r+1;i++)
	 {
	 	 t=a[4];
	 	 for(j=4;j>0;j--)
	 	  {
	 	  	 a[j]=a[j-1];
		   }
		   a[0]=t;
	 	 
	 }
	 for(i=0;i<=43;i++)
	  printf("%d ",a[i]);
	getch();
	
}
