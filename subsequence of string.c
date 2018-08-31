#include<stdio.h>

void main()
{
	 char a[]="garg";
	 char b[16][4];
	 int i,j,x=0;
	 
	 for(i=1;i<=15;i++)
	 {
	 	 for(j=0;j<4;j++)
	 	 {
	 	 	 if(i&(1<<j))
	 	 	   {
	 	 	 	 b[i][x++]=a[j];
			   }
		  }
		  b[i][x]='\0';
		  x=0;
		  
	 }
	 
	 for(i=1;i<=15;i++)
	   printf("%s\n",b[i]);
	 
}
