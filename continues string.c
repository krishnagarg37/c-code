#include<stdio.h>
#include<string.h>
void main()
{
	 char a[]="aaaabc";
	 int l=strlen(a);
	 char b[l];
	 int i,j=0,k;
	 b[0]=a[0];
	 for(i=0;i<l;i++)
	 {
	 	for(k=1;k<l;k++)
		 {		
	     	 if(a[k]!=b[j] && a[k]!='0')
	 	  {
	 	  	 
	 	  	  b[++j]=a[k];
	 	  	  a[k]='0';
	 	  	  break;
		   }
	    }
	 }
	 if(l!=j+1)
	  printf("not possible");
	 else
	printf("%s",b);
	 getch();
}
