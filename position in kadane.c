#include<stdio.h>

void main()
{ 
  int n;
  scanf("%d",&n);
  int a[n];
  int i;
  for(i=0;i<n;i++)
   scanf("%d",&a[i]);
   
   int m1=0,m2=-1000000;
   int t1=0,t2=0;
   for(i=0;i<n;i++)
   {
   	  m1=m1+a[i];
   	  
   	  if(m1>m2)
   	   {
		 m2=m1;
   	     t2=i;
   	    }
   	   if(m1<0)
   	     m1=0;
    }
    m1=0;
    for(i=t2;i>=0;i--)
     {
     	 m1=m1+a[i];
     	  if(m1==m2)
     	    {
     	    	 t1=i;
     	    	 break;
			 }
	 }
   printf("%d %d %d",t1,t2,m2);
}
