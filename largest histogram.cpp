#include<iostream>
#include<conio.h>
#include<stack>
using namespace std;
int main()
{
	 stack<int> s;
	 int a[]={3,0,5,4,4,4};
	 int i=0,max=0;
	 while(i<6)
	 {
	 	  if(s.empty()||a[s.top()]<=a[i])
	 	    s.push(i++);
	 	  else
	 	  {
	 	     int tp=s.top();
	 	     s.pop();
	 	     int cal=a[tp]*(s.empty()?i:(i-1-s.top()));
	 	     printf("%d\n",cal);
	 	     if(cal>max)
			  max=cal;		     	 
		  }
	}
		  printf("%d",max); 
		  getch();
}
