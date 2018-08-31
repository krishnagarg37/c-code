#include<stdio.h>

void main()
{
     int prime[20];
	 int i,n=20,j;
	 
	 for(i=0;i<20;i++)
	  prime[i]=1;
	 
	 prime[0]=0;
	 prime[1]=0;
	 
	 for(i=2;i*i<=n;i++)
	 {
	 	
	 	for(j=2;i*j<=n;j++)
	 	{
	 		 prime[j*i]=0;
	 		    
		 }
	 }
	 
	 for(i=0;i<n;i++)
	 {
	 	 if(prime[i]==1)
	 	   {
	 	   	 printf("%d ",i);
			}
		 }	
}

