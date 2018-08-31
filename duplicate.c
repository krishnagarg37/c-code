#include<stdio.h>

void main()
{
	 int a[]={1,3,1,3,10,10,1};
	 int i;
	 for(i=0;i<7;i++)
	 {
  	 int in=a[i]%7;
	 	 a[in]=a[in]+7;
	 }
	 
	 for(i=0;i<7;i++)
	 {
	 	//printf("%d \n",a[i]);
	 	 if( (a[i]/7) >1 )
	 	   printf("%d ",i);
	 }
	 getch();
}
