#include<stdio.h>

void main()
{
    int i,j;
	int sum;
	printf("Enter the sum\n");
	scanf("%d",&sum);
	int c;
	printf("Enter the no coin\n");
    scanf("%d",&c);
    int coin[c+1];
    
    for(i=1;i<=c;i++)
       	scanf("%d",&coin[i]);
         
	int memo[c+1][sum+1];		 
	
	for(i=0;i<sum;i++)
	   memo[0][i]=0;
	 memo[0][0]=1;   
	for(i=1;i<=c;i++)
	{
		 for(j=0;j<=sum;j++)
		 {
		 	 if(coin[i]<=j)
		 	 {
		 	 	if(i==1)
		 	 	{
		 	 		if(j%coin[i]==0)
		 	 		 memo[i][j]=1;
		 	 		 else
		 	 		 memo[i][j]=0;
				  }
				  else
				  {
				  	     memo[i][j]=memo[i-1][j]+memo[i][j-coin[i]];
				       
				   }
			  }
			  else
			  {
			  	 memo[i][j]=memo[i-1][j];
			  }
		 }
	}
		for(i=1;i<=c;i++)
      	{
		 for(j=0;j<=sum;j++)
          {
          	  printf("%d ",memo[i][j]);
		  }
		  printf("\n");
	    }
	  printf("ans=%d\n",memo[c][sum])  ;
   getch(); 	 
}
