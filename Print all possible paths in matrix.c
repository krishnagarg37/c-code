#include<stdio.h>

void printall(int a[3][3],int *b,int x,int y,int in)
{
	  if(x==2 && y==2)
	   return;
       if(x>2 ||y>2 || a[x][y]==0)
         return;
        
		 printf("%d %d\n",x,y);
	 	 printall(a,b,x+1,y,in+1);
	 	 printall(a,b,x,y+1,in+1);

}

void main()
{
	 int a[3][3]={ {1,0,0},{1,1,1},{1,1,1}};
	 int b[12];
	 int i,j;
	 	 for(i=0;i<3;i++)
	  {
	  	 for(j=0;j<3;j++)
	  	   printf("%d ",a[i][j]);
	  	printf("\n");
		  	  }
	 printall(a,b,0,0,0);
}
