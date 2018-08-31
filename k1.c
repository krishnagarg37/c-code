#include<stdio.h>
const max=500005;
void main()
{
   int t;
   scanf("%d",&t);
   long long int i,j;
   
   for(i=1;i<=t;i++)
   {
   	    long long int n,o,d;
   	    scanf("%lld%lld%lld",&n,&o,&d);
   	    long long int x1,x2,a,b,c,m,l;
   	    scanf("%lld%lld%lld%lld%lld%lld%lld",&x1,&x2,&a,&b,&c,&m,&l);
   	    int s[max],xi=x1,xj=x2,xp;
   	    for(j=1;j<=n;j++)
   	     {
   	     	 if(j==1)
   	     	  	 s[j]=x1+l;
			
			 else if(j==2)
			     s[j]=x2+l;
			 else
			  {
			  	 xp=((a*xj) + (b*xi) + c)%m;
			  	 s[j]=xp+l;
			  	 xi=xj;
			  	 xj=xp;
			  	 
			  		    	}	  
			}
			
		int count=0,f=0;
		long long m1=0,m2=-0x3f3f3f3f3f3f3f3fLL;	
		for(j=1;j<=n;j++)
		{
			 if(s[j]%2==1)
			    count++;
			 m1=m1+s[j];
			 
			 if(m2<m1 && m1<=d && count<=o)
			     { m2=m1;
			        f=1;
			     }
			 
			  if(m1<0 || m1>d || count>o )
			   {
			   	 if(m1>d && f==1 )
			   	   {
			   	   	   j=j-2;
			   	   	   
					  }
				if(count>o)
				   j--;
					
			   	   m1=0;
			   	  count=0;
		      }
			}
		if(m2!=-0x3f3f3f3f3f3f3f3fLL)
		  printf("Case #%d: %lld\n",i,m2);
		else
		  printf("Case #%d: IMPOSSIBLE\n",i);
    }
}
