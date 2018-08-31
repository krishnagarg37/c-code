#include<stdio.h>

int main()
{
	 int t,n,i,j,l=0;
	 
	 scanf("%d",&t);
	 while(t--)
	 {
	 	 int temp;
	 	 scanf("%d",&n);
	 	 long int a[n];
	 	 for(i=0;i<n;i++)
	 	   	 scanf("%ld",&a[i]);
	 	  
		  for(i=0;i<n;i++)
		   {
		   	  for(j=n-1;j>=i;j--)
		   	   {
		   	   	 if(l<(j-i+1))
		    	 	{
		         	   	 if(a[i]>=a[j])
		   	   	     	 {
						  temp=j-i+1;
		   	   	     	  break;
		   	              }	  
				    }
				  else break;
			  }
			  if(l<temp)
			     l=temp;		   	  
			}
		 printf("%d\n",l);	 
	 }
	 return 0;
}
