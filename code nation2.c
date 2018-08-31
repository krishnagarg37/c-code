#include<stdio.h>
#include<math.h>
void main()
{ 
int a[]={60,70,70,70};
	int m=70;
   int sum=0;
   int i,j,c=0;
   for(i=0;i<4;i++)
     sum+=a[i];
   int memo[5][sum+1];
   memo[0][0]=1;//empty set
   
   for(i=1;i<5;i++)
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
   	  	  	 if(j/i>=m && memo[i][j]==1)
   	  	  	  c=i;
		  }
		  
		  else
		  {
		  	 if(memo[i-1][j-a[i-1]]==1 || memo[i-1][j]==1)
		  	  {
		  	  	 memo[i][j]=1;
		  	  	 if(j/i>=m && memo[i][j]==1)
   	  	  	         c=i;
		  	  	 
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
