#include<stdio.h>

void main()
{
	 int i,j,a[]={1, 2, 3, 4, 5, 6},diff=-1;
	 int max[6],min[6];
	 
	 min[0]=a[0];
	 max[5]=a[5];
	 
	 for(i=1;i<6;i++)
	   min[i]=a[i]<min[i-1]?a[i]:min[i-1];
	  
	  for(i=4;i>=0;i--)  
	   max[i]=a[i]>max[i+1]?a[i]:max[i+1];
	   
	   i=0;
	   j=0;
	   
	   while(i<6 && j<6)
	   {
	   	  if(max[j]>min[i])
	   	    {
	   	    	 diff=diff<(j-i)?(j-i):diff;
	   	    	 j+=1;
			   }
	      else
		   i++;		   
	   }
	   
	   printf("%d",diff);
	    getch();
	    	
	 }
