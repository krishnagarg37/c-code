#include<stdio.h>
#include<string.h>
int count(char *a,int x)
{
	 int i,c=0;
	 for(i=0;i<x;i++)
	    if(a[i]=='3')
	      c++;
	 return c;
}
void main()
{
	 int t;
	 scanf("%d",&t);
	 while(t--)
	 { 
	    long long int n;
	    scanf("%lld",&n);
	    n++;
	    char a[11];
	    sprintf(a,"%lld",n);
	    while(count(a,strlen(a))<3)
	    {
	    	 n++;
   	 	     sprintf(a,"%lld",n);
		}
		printf("%lld\n",n);
	    
	 }
}
