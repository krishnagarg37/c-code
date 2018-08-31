#include<iostream>
#include<map>
using namespace std;
const int n=4;
int m=3;
int time=46;
int beauty[]={5,10,15,20};
int u[]={0,1,0};
int v[]={1,2,3};
int t[]={6,7,10};

map<pair<int ,int>,int > my;

int trav(int a[][n],int in ,int cm,int ti,int max)
{
   	 int i,j;
 	 
   	 for(i=0;i<n;i++)
   	  {
   	  	if(a[in][i]==1)
		{
		   	  	  	 
		  if(i==cm)
		   {		  	
		    if(in>cm)
			  {
			  	    max=max+beauty[in];
			        printf("max beauty=%d time=%d in=%d i=%d cm=%d\n",max,ti,in,i,cm);
			    	trav(a,i,in,ti,max);
		      }
			  	 
		  }
		  else{
		  	    int tim;
		  	    if( (ti+2*my[{i,in}])>=time)
		             return max;
		  	    if(in>=cm)
		  	      max=max+beauty[in];
		  	    
		  	    tim=ti+2*my[{in,i}];
		  	    printf("max beauty=%d time=%d in=%d i=%d cm=%d\n",max,tim,in,i,cm);
    		    trav(a,i,in,tim,max);
    		       
    		  }
		    }
   	  	  	   
		 if(max>m)
			  m=max;
					
			}   	  
   	  return m;
}

int main()
{
	 int a[4][4]={0};
	 int i,j,max;
	 
	 for(i=0;i<m;i++)
	  {
	  	 a[u[i]][v[i]]=1;
	  	 a[v[i]][u[i]]=1;
	  	 my[{u[i],v[i]}]=t[i];
	  	 my[{v[i],u[i]}]=t[i];
	  }
	  
	  max=trav(a,0,0,0,0);	  
	 	 printf("%d",max);
}
