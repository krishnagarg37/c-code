#include<stdio.h>
int check(long int x)
{
	  int t1;
	   t1=x & (x >> 1);
	  if(t1)
	   return 1;
	   else
	   return 0;
}

void main()
{
	 int n,q,i;
	 scanf("%d%d",&n,&q);
	 long int a[n+1],b[n+1];
	 for(i=1;i<=n;i++)
	 {
	 	 scanf("%d",&a[i]);
	 	 b[i]=check(a[i]);	 	 
	 }
	 for(i=1;i<=n;i++)
	  printf("%d ",b[i]);
	 /*while(q--)
	 {
	 	 int l,r,c=0;
	 	 scanf("%d%d",&l,&r);
	 	 for(i=l;i<=r;i++)
	 	    if(b[i]==1)
	 	     c++;
	 	 printf("%d\n",c);
	 }*/
	 
}
