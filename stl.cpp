#include<iostream>
#include<algorithm>
#include<string.h>
#include<cstdlib>
using namespace std;
int main()
{
	 char a[]="garg";
	 
	 cout<<a<<"\n";
     strrev(a);
	 cout<<a;
	 cout<<binary_search(a,a+3,'r');
  return 0; 	 
}
