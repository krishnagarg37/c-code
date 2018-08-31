#include<stdio.h>
#include<math.h>

int fact(int n)
{
	 int i,f=1;
	 for(i=n;i>=1;i--)
	    f=f*i;
	  return f;
}
void main()
{
	 int a,b,i;
	 scanf("%d%d",&a,&b);
	 for(i=a;i<=b;i++)
	 {
	  int t1,sum=0;
	  t1=i;
	   while(t1!=0)
	  {
	  	 sum=sum+fact(t1%10);
	  	 t1=t1/10;
	  }
	  if(i==sum)
	   printf("%d\n",i);
      
      }
	getch();  
}
