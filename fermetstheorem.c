#include<stdio.h>
#include<math.h>
#include<string.h>
long long power(long long a,long long r,long long p)
{
	long long  t=2,re=1;
	printf("%lld %lld \n",re,r);
   while(r>t)
   {
   		  
   	  if((long long)pow(a,t*2)%p>=0)
   	     	 { re=re*( (long long)(pow(a,t))%p ) %p;
   	            r=r-t;
				  t=t*2;
		     }
		else
		{
			if(r>(2*t)){
			 re=(re*re)%p;
			 r=r-(2*t);
			 t=t+t;}
			 else
			  {
			  	re=re*( (long long)(pow(a,t))%p ) %p;
   	            r=r-t;
			  }
		}
   	  
	 printf("%lld %lld %lld\n",re,r,t);
   }
    
  re=(re*(long long)(pow(a,r)))%p;
   return re;
}
void main()
{
	long long int a,m,r=0;
	int i;
	char b[100];
	scanf("%lld",&a);
	scanf("%s",b);
	scanf("%lld",&m);
      
    for(i=0;i<strlen(b);i++)
     {
	   r=r*10 + b[i]-'0';
       r=r%(m-1);
     } 
    //printf("%lld\n",r); 
    //r=(long long)pow(a,r);
    printf("%lld",power(a,r,m));
	getch();
	
}
