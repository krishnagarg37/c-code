#include<stdio.h>

void main()
{
	 int ts,ps,a,b,f=0,f1=1;
	 scanf("%d%d%d%d",&ts,&ps,&a,&b);
	 int req=ts-ps;
	 
	 int t,a1,b1;
	 
	 
	 while(req!=0){
	 t=a/50;
	 a1=(t+1)*50-a;
	 t=b/50;
	 b1=(t+1)*50-b;
	 
	 if(a1<b1 && a1<req && a1!=0)
	 {
	 	 a+=a1;
	 	 req-=a1;
	 	 
	 	 if(req<b1)
	 	 {
	 	    if(req%2==0)
	 	    {
		    	 b+=req/2;
	 	    	 a+=req/2;
	 	    	 req=0;
			 }
			 else
			 {
			 	 b+=1+req/2;
	 	    	 a+=req/2;
	 	    	 req=0;
			 }
	    }
	    else if(req==b1)
	      {
		    b+=b1;
		     req=0;
		  }
			 
    }
    else if(a1>b1 && b1<req && b1!=0)
	 {
	 	 b+=b1;
	 	 req-=b1;
	 	 
	 	 if(req<a1)
	 	 {
	 	    if(req%2==0)
	 	    {
	 	    	 b+=req/2;
	 	    	 a+=req/2;
	 	    	 req=0;
			 }
			 else
			 {
			 	 b+=1+req/2;
	 	    	 a+=req/2;
	 	    	 req=0;
			 }
	    }
	    else if(req==a1)
	      { a+=a1;
	         req=0;
	      }
			 
    }
    
    else if(a1==b1 && req>a1)
    { 
    	if(a>b)
    	 {
		  f1++;
    	  if(f1%2==0)
		  {
		   a=a+a1;
    	   req-=a1;
		  }
    	  else
    	    {
    	    	b=b+b1;
    	    	req-=b1;
			}
		 }
		 else
		 {
		  f1++;
    	  if(f1%2==0)
		  {
		   b=b+b1;
    	   req-=b1;
		  }
    	   else
    	    {
    	    	 a=a+a1;
    	         req-=a1;
			}
		 }
    	 
	}
	
	else if(a1==b1 && req<a1)
	{
		if(a1==req)
		{
			if(a>b)
			{
		     a+=a1;
	         req=0;
	        }
	        else
	        {
	        	b+=b1;
		        req=0;
			}
		}
		
		else if(req%2==0)
	 	    {
	 	    	 b+=req/2;
	 	    	 a+=req/2;
	 	    	 req=0;
			 }
			 else
			 {
			 	 b+=1+req/2;
	 	    	 a+=req/2;
	 	    	 req=0;
			 }
	}
	
    f++;	
}

printf("%d %d",a,b);
    getch();
    
}
	 
