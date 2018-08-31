#include<stdio.h>

int prime(int x)
{
	  int t1=1,i=1,j;
	  
	  while(t1<=x)
	  {
	  	  i++;
	  	t1=i*i;
	  	
	  }
	  
	  for(j=2;j<i;j++)
	  {
	  	 if(x%j==0)
	  	   return 0;
	  }
	  return 1;
}
int dtbc(int x)
{
	 int a=0;
	 while(x!=0)
	 {
	 	 a=a*10+(x%2);
	 	 x=x/2;
	 }
	 int c=0,r;
	 while(a!=0)
	 {
	 	 r=a%10;
	 	 if(r==1)
	 	    c++;
	 	 a=a/10;
	 }
	 return c;
}
void main()
{ 
  printf("%d",dtbc(4));
   getch();
}
