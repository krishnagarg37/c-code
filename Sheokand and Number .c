#include<stdio.h>
#include<math.h>
void main()
{
	 int t,i;
	 scanf("%d",&t);
	 while(t--)
	 {
	 	 long long int no,sum1=0,sum2=0,min=1000000008;
	 	 scanf("%lld",&no);
	 	 long long int x=1,y=0,s1,s2,s3;
	 	 i=1;
	 	 if(no!=0)
	 	 {
	 	 while(pow(2,i)<=no)
	 	 {
	 	 	x=i;
	 	 	i++;
		  }
		  s1=pow(2,x);
		  s3=pow(2,x+1);
		  
	     while(x>y && sum1<no)
		   {
		   	  s2=pow(2,y);
		   	  sum1=s1+s2;
		   	    ;
		     if(abs(min-no)>abs(sum1-no))
		     min=sum1;
		    
		   }
		   sum2=s3+1;
		   
		  printf("%lld\n",abs(min-no)<abs(sum2-no)?abs(min-no):abs(sum2-no));
	 }
	 else
	 printf("0\n");
}
}
