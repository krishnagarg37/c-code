#include<stdio.h>
#include<math.h>
void main()
{ 
 //linear method
	/*int a[]={1,2,3,4};
	int m=2;
	int l=pow(2,4)-1;
	int i,j,sum=0,c=0;
	for(i=1;i<=l;i++)
	{
		 for(j=0;j<4;j++)
		 {
		 	 if(i&(1<<j))
		 	  {
		 	  	 sum+=a[j];
			   }
			   
		 }
		 if(sum%m==0)
		   c++;
		 sum=0;
	}
    printf("%d",c);
    */
    // Dynamic Programming
    int a[]={1,2,3};
	int m=3;
   int sum=0;
   int i,j,c=0;
   for(i=0;i<3;i++)
     sum+=a[i];
   int memo[4][sum+1];
   memo[0][0]=1;//empty set
   
   for(i=1;i<4;i++)
   {
   	 for(j=0;j<=sum;j++)
   	  {
   	  	  
   	   if(j>=a[i-1] )
			   
		 {	
		    if(i==1)
   	  	  {
   	  	  	if(j==a[i-1])
   	  	  	 memo[i][j]=1;
   	  	  	 else
   	  	  	   memo[i][j]=0;
   	  	  	 if(j%m==0 && memo[i][j]==1)
   	  	  	  c++;
		  }
		  
		  else
		  {
		  	 if(memo[i-1][j-a[i-1]]==1 || memo[i-1][j]==1)
		  	  {
		  	  	 memo[i][j]=1;
		  	  	 if(j%m==0 && memo[i][j]==1)
   	  	  	        c++;
		  	  	 
			 }
			 else
			  memo[i][j]=0;
		  }
	   }
	   
	   else
	   {
	   	 memo[i][j]=memo[i-1][j];
	   }
			   
   	  	  
  }
}

printf("%d",c);
}
