#include<stdio.h>

int min(int x,int y)
 {
 	 return (x>y?y:x);
 }
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
			 
	for(i=1;i<=c;i++)
	{
		 for(j=0;j<=sum;j++)
		 {
		 	 if(coin[i]<=j)
		 	 {
		 	 	if(i==1)
		 	 	{
		 	 		 memo[i][j]=1+memo[i][j-coin[i]];
				  }
				  else
				  {
				  	if(   j% ((memo[i][j-coin[i]]+1)*coin[i])  ==0  &&     j%(memo[i-1][j]*coin[i-1])==0 )
				       memo[i][j]=min(memo[i-1][j],memo[i][j-coin[i]]+1);
				       
				    else if( j% ((memo[i][j-coin[i]]+1)*coin[i])==0)
				       	memo[i][j]=memo[i][j-coin[i]]+1;
					
					else
					   memo[i][j]=memo[i-1][j];
					
			      }
			  }
			  else
			  {
			  	if(i==1)
			  	 memo[i][j]=0;
			  	else
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
	 
    i=c;
    j=sum;
      while(1)	 
     	{
     		 if(memo[i][j]==(memo[i][j-coin[i]]+1) && (j-coin[i])>=0)
              {
              	j=j-coin[i];
			  	printf("%d ",coin[i]);
			  }
			  else
			  {
			 	i--;
               }
     	}
    getch(); 	 
}
