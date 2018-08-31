/*
// Sample code to perform I/O:
#include <stdio.h>

int main(){
	int num;
	scanf("%d", &num);              			// Reading input from STDIN
	printf("Input number is %d.\n", num);       // Writing output to STDOUT
}

// Warning: Printing unwanted or ill-formatted data to output will cause the test cases to fail


// Write your code here

-8 0 -2

-8  =1
 0  =1
-2  =1
-8 0 =2
-8 -2 =2
 0 -2 =2
 -8 0 -2 =3
*/
#include<stdio.h>

int print(int *a,int *b,int index,int i,int k,int sum,int n)
{
    if(index==k)
    {
         int j;
         for(j=0;j<k;j++)
             {
             	 printf("%d\n",b[j]);
                 sum=sum+k*b[j];
             }
           return sum;  
    }
    
    if(i>=n)
      return sum;
        b[index]=a[i];
        sum=print(a,b,index+1,i+1,k,sum,n);
        sum=print(a,b,index,i+1,k,sum,n);
    
}

void main()
{
     int t;
     int i,j;
     scanf("%d",&t);
     
     for(j=1;j<=t;j++)
     {
         int n,sum=0,s=-10000;
         scanf("%d",&n);
         long int a[n];
         for(i=0;i<n;i++)
         scanf("%d",&a[i]);
         
         for(i=1;i<=n;i++)
         {
             int b[i];
             sum=print(a,b,0,0,i,0,n);
             if(sum>s)
             {
                  s=sum;
             }
         }
         printf("%d",s);
         
     }
}
 
 
 
