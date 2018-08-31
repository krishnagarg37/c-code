#include<stdio.h>
#include<conio.h>
void main()
{
	 int a[]={2,1,0,1,0,0,1,2};
	 int s=sizeof(a)/sizeof(a[0]);
	 int i,temp,in=0,med=0,end=s-1;
	 while(med<=end)
	 {
	 	switch(a[med])
	 	{
	 		case 0:{
	 			    temp=a[med];
					 a[med]=a[in];
					 a[in]=temp;
					 med++;
					 in++;
					break;
			      }
			 case 1:{
			 	     med++;  
				     break;
			        }
			case 2:{
				     temp=a[med];
					 a[med]=a[end];
					 a[end]=temp;
					 end--;
 				    break;
			       }     
		 }
	 }
  for(i=0;i<s;i++)
  { 
  printf("%d ",a[i]);
    }
    
	 
	getch(); 
}
