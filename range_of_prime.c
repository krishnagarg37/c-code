#include<stdio.h>

void main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		 int f=0,i;
		 long n,m;
		 scanf("%ld%ld",&n,&m);
		 while(n<=m)
		 {
		 	if(n!=1){ 
		 	 for(i=2;i*i<=n;i++)
		 	 { 
		 	     if(n%i==0)
		 	     { f=1;
		 	       break;
		 	     }
		 	     
			  }
			  
			  if(f==0)
			    printf("%d\n",n);
			   f=0;
		      }
			   n++; 
		 }
		 printf("\n");
		 
	}
}
