#include<iostream>
#include<set>

void main()
{
	 int a[]={1,2,2,4,5,1};
	 int i,j,k,n=6,sum=0;
	 set <int> s;
	 for(i=0;i<n;i++)
	 {
	 	 for(j=i;j<n;j++)
	 	 {
	 	    for(k=i;k<=j;k++)
	 	       {
	 	       	   if(s.find(a[k])==s.end())
	 	       	       s.insert(a[k]);
	 	       	    else
	 	       	     {
	 	       	     	s.clear();
	 	       	     	 break;
					 }
			   }
				if(s.size())	 
	 	       	   sum=sum+s.size();  
	 	       	s.clear(); 	      
		  }
		  
	 }
	 printf("%d",sum);
}
