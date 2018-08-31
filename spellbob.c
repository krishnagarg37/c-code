#include<stdio.h>

void main()
{
	 int n;
	 scanf("%d",&n);
	 while(n--)
	 {
	 	 char a[4];
	 	 char b[4];
	 	 scanf("%s%s",a,b);
	 	 int c1=0,c2=0,i,j,c3=0;
	 	 for(i=0;i<3;i++)
	 	  	 if( (a[i]=='b' && b[i]=='o') ||(b[i]=='b' && a[i]=='o'))
	 	 	   break;
	 	 printf("%d",i);
		  if(i!=3)
		  {
		  	 for(j=0;j<3;j++)
		  	 {
		  	 	 if(j!=i)
		  	 	  {
		  	 	  	 if( (a[j]=='b' && b[j]=='o') ||(b[j]=='b' && a[j]=='o'))
		  	 	  	    c1++;
		  	 	  	  else if(a[j]=='o'||b[j]=='o')
		  	 	  	    c2++;
		  	 	  	  else if(a[j]=='b'||b[j]=='b')
		  	 	  	    c3++;
				  }
				  
					 
			  }
			 if(c1==2 ||(c1==1 && c2==1)||(c3==2)||(c1==1 && c3==1)||(c2==1&&c3==1))
			   printf("yes\n");
			  else
			   printf("no\n"); 
		  }
		  else
		  {
		  	for(i=0;i<3;i++)
		  	{
		  	  if(a[i]=='b'||b[i]=='b')
		  	    c1++;
		  	   if(a[i]=='o'||b[i]=='o')
		  	    c2++;
		    }
		    if(c1>=2 && c2>=1)
		     printf("yes\n");
		     else
		      printf("no\n");
	      }
		    
		}
}
