#include<stdio.h>

int max(int x,int y)
 {
 	 return (x>y?x:y);
 }
void main()
{
    int i,j;
	int r;
	printf("Enter the length of rod\n");
	scanf("%d",&r);
	int c;
	printf("Enter the no length to be cut and price of cut\n");
    scanf("%d",&c);
    int cut[c],price[c];
    
    for(i=0;i<c;i++)
       {
       	scanf("%d",&cut[i]);
       	scanf("%d",&price[i]);
       }
       
	int memo[c+1][r+1];
	
	for(i=0;i<r;i++)
        memo[0][i]=0;
		 
	for(i=1;i<=c;i++)
	{
		 for(j=0;j<=r;j++)
		 {
		 	 if(cut[i-1]<=j)
		 	 {
		 	 	memo[i][j]=max(memo[i-1][j],memo[i][j-cut[i-1]]+price[i-1]);
			  }
			  else
			  {
			  	memo[i][j]=memo[i-1][j];
			  }
		 }
	}
		for(i=1;i<=c;i++)
      	{
		 for(j=0;j<=r;j++)
          {
          	  printf("%d ",memo[i][j]);
		  }
		  printf("\n");
	   }
    i=c;
    j=r;
      while(1)	 
     	{
     		 if(memo[i][j]==memo[i-1][j])
              {
              	 i--;
			  }
			  else if(up==1 && j!=0)
			  {
			 	j=j-cut[i-1];
			  	printf("%d ",cut[i-1]);
               }
     	}
		
    getch(); 	 
}
