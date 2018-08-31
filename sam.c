#include<stdio.h>

long long int fa(int x)
{
	 long long int f=1,i;
	 if(x==0)
	  return 1;
	 for(i=1;i<=x;i++)
	  {
	  	   f=(f*i)%1000000007;
	  }
	  return f;
}
long long int fact(int x,int y)
{                             
	  int i=x-y;
	  long long int f=1;
	  while(i)
	   {
	   	   f=(f*x)%1000000007;
	   	   x--;
	   	   i--;
	   }
	   return f;
	  	 
}
void main()
{
	 int n;
	 scanf("%d",&n);
	 int a=n+n;
	 int b=(n*n-n);
	 int c=n+2;
	 if(n==2)
	 printf("%d",0);
	
	 else
	 {
	 long long int re=(fact(b,(b-c)>c?(b-c):c)/fa((b-c)>c?c:(b-c)) %1000000007);
	 printf("%lld",(a*re)%1000000007);
     }	 
	 
	 
}
