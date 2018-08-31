#include<stdio.h>

void main()
{ 
  int n,t;
  scanf("%d",&n);
  int a[n*n];
  int i,j=0;
  for(i=0;i<(n*n);i++)
   scanf("%d",&a[i]);
   
  scanf("%d ",&t);
  while(t--)
  {
  	 char q[8];
  	 gets(q);
  	 	 
  	 if(q[1]=='H')
  	 {
  	 	 for(i=0;i<(n*n);i++)
  	 	  {
  	 	  	 printf("%d ",a[i]);
  	 	  	 j++;
  	 	  	 if(j>=n)
  	 	  	   {
					 printf("\n");
			         j=0;
			      }
		   }
	   }
	   else
	   {
	   	  int x=q[5]-'0',y=q[7]-'0',i1,i2;
	   	  for(i=0;i<(n*n);i++)
	   	  {
	   	  	 if(a[i]==x)
	   	  	    {i1=i;break;
					 }
			 }
			 for(i=0;i<(n*n);i++)
	   	     {
	   	  	 if(a[i]==y)
	   	  	    {i2=i;break;
					 }
			 }
			 a[i1]=y;
			 a[i2]=x;
			 
	   }
  	 
  }
  
}
