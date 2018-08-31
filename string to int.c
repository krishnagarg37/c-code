#include<stdio.h>
void main()
{
	 char a[]={"1,2,3,45"};
	 int n=0,i,k=0;
	 int b[8];
	 for(i=0;i<8;i++)
	 {
	 	if(a[i]!=',')
	 	{
	 		n=n*10+a[i]-'0';
	 	
		 }
		 else
		 {
		 	b[k++]=n;
		 	n=0;
		 }
	 }
	 b[k++]=n;
	 for(i=0;i<k;i++)
	  printf("%d ",b[i]);
	 
}
