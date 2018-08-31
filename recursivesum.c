#include<stdio.h>

int count(int m,int n,int x)
{
	  int c=0,i;
	  
	  int t1=m/9,t2=n/9,t3=m%9,t4=n%9;
	  
     if(m>=1 && n<=9 && m<=x && n>=x)
	        c++;
   else			 	  
	 { 
	  if(t3==0)
	      t3=9;
	  if(t4==0)
	    t4=9;   
	  if(t3==9)
	   	   c=t2-t1;	   	   
	   else
	       c=t2-t1-1;
	   if(t3==9 && x==9)
	     c++;	   	   
	   if(x>=1 && x<=t4 && t4!=9)
	     	   c++;
     }
	  return c;
}
void main()
{
	 int t;
	 scanf("%d",&t);
	 while(t--)
	 { 
	    int m,n,x;
	    scanf("%d%d%d",&m,&n,&x);
	    printf("%d\n",count(m,n,x));
	}
}
