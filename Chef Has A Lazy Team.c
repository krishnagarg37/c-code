#include<stdio.h>

void main()
{
	 int i,t;
	 scanf("%d",&t);
     while(t--)
	 {
	 	 int c=0;
	 	 long n,r;
		 scanf("%ld%ld",&n,&r);
		 long a[n];
		 for(i=0;i<n;i++)
		  { 
		    scanf("%d",&a[i]);
		    if(a[i]<=r)
		     c++;
		   
	      }
	      if('a'=='A')
	      printf("%d %d %d\n",n,c,c);
		   
	  } 
}
