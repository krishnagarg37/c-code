#include <stdio.h>
#include <math.h>
int main()
{

int a[]={8,8,2,4,5,5,1};

int i,j,k=0,l,r,water=0;

for(i=0;i<7;i++)
{ 
   if(a[k]!=0 && a[k]!=a[k+1])
	 {
	   for(j=i+1;j<7;j++)
	   	 if(a[i]<=a[j])
	    	   break;
	  	 
	    if(j!=7)
	    {    
	       for(l=i+1;l<j;l++)
	           if(a[i]>a[l])
	           {	 water+=a[i]-a[l];
	                  printf("%d i=%d l=%d\n",water,i,l);
	  	 }
	        i=j-1;
	    }
	    else
	    { 
	      i++;
	      int max=i;
	 	  for(j=i+1;j<=7;j++)
	        {
	  	      if(a[max]<a[j])
	  	      max=j;
	        }
	        printf("max=%d %d\n",max, i);
	      if(max!=0)
	        {
	 	      for(l=i;l<=max;l++)
	               if(a[l]<a[max])
	  	              	{
							  water+=a[max]-a[l];
							    printf("%d l=%d max=%d\n",water,l,max);}
	  	       i=max-1;        	 
	  	    }
	      
	    }
    }
	else
	{
		k++;
	}
 }
printf("%d",water); 
getch();
    return 0;
}

