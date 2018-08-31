#include<stdio.h>
#include<math.h>
void main()
{
	 int t;
	 scanf("%d",&t);
	 while(t--)
	 {
	 	 int n,k,sum=0;
	 	 scanf("%d%d",&n,&k);
	 	 int a[n],i,count=0;
	 	 for(i=0;i<n;i++)
	 	   {
	 	   	 scanf("%d",&a[i]);
	 	   	 if(a[i]==1)
	 	   	   count++;
			}
	 	 
	 	 if(count>=k)
	 	 {    
	 	 	 for(i=0;i<n;i++)
	 	 	  {
	 	 	  	
	 	 	  	 if(i%2==0)
	 	 	  	 {
	 	 	  	 	if(sum>0)
	 	 	  	    sum=sum+a[i];
	 	 	  	    else
	 	 	  	    sum=sum-a[i];
	 	 	     }
	 	 	  	   else
	 	 	  	   {
	 	 	  	   	 if(sum>0)
	 	 	  	      sum=sum-a[i];
	 	 	  	     else
	 	 	  	      {
	 	 	  	      	 sum=sum+a[i];
						  }
			          }
			          
	  }
			if(abs(sum)>=k)
			   printf("1\n");
			 else
			   printf("2\n");	
	 	 	
		  }
		  else
		  {
		  	 printf("2\n");
		  }
	 	 
	 }
}
