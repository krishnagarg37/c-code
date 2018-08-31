#include <iostream>

int max(int x,int y)
 {
 	 return x>y?x:y;
 }

using namespace std;
int main()
{
int a[] ={-2, 2, -3, 4, 5};
 int sum=0;
 int i;
 for(i=0;i<5;i++)
  	 if(a[i]>0)
 	    sum+=a[i];
	
	
 if(sum%2!=0)
 {   
   int m1=-10000,m2=sum;	   
  for(i=0;i<5;i++)
  {
  	 if(a[i]%2!=0)
  	  {
  	  	 if(a[i]<0 && a[i]>m1)
              m1=a[i];
		 if(a[i]>0 && a[i]<m2)	
		   m2=a[i];                	  	 
	  }
  }
  printf("%d %d ",m1,m2);
  sum=max(sum-m2,sum+m1); 
 }
  cout<<sum; 
    
 } 
 
