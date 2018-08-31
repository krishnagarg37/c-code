#include<stdio.h>

void main()
{
	 int a[]={1, 3, 4, 5, 7};
	 int k=12;
	 int i,l,r;
	 int c=0;
	 for(i=0;i<4;i++)
	 {
	 	 l=i+1;
	 	 r=4;
	 	 while(l<r)
	 	 {
	 	 	 if(a[i]+a[l]+a[r]>k)
	 	 	   r--;
	          else
	          {
	          	 l++;
	          	 c++;
	          	 printf("%d %d %d\n",a[i],a[l],a[r]);
			  }
		  }
	 	 
	 }
	 
}
