#include<stdio.h>

int maze(int a[4][4],int sol[4][4],int x,int y,int n)
{
	if(x==n-1 && y==n-1)
	    {
	    	 sol[x][y]=1;
	    	 return 1;
		}
	
	if(a[x][y]!=0)
	{
	   sol[x][y]=1;
	   
    if(maze(a,sol,x+1,y,n)==1)
	   	   return 1;  
	if(maze(a,sol,x,y+1,n)==1)
	   	    return 1;
	     
	 sol[x][y]=0;
	 return 0;
  }
  return 0;
}
void main()
{
	 int n=4;
	 int a[4][4]={{1,1,1,1},{0,1,1,0},{1,1,1,0},{0,1,1,1}};
	 int i,j;
	 int sol[4][4]={0, 0, 0, 0};
	 
	 maze(a,sol,0,0,n);  
	 
	  for(i=0;i<n;i++)
	 { 	 for(j=0;j<n;j++)
	  	 {
	  	 	printf("%d ",sol[i][j]);
		   }
		   printf("\n");
	}
		 
}
