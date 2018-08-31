#include<iostream>
#include<set>
#include<string.h>
#include<algorithm>
using namespace std;
int main()
{
	 char st[1005];
	 char temp[1005];
     set<string> s;
	 set<string>::iterator it;
	 cin>>st;
	 strcpy(temp,st);
	 
	 int a[26]={0},i,j,l=strlen(st);
	 char *p1=temp,*p2=temp+sizeof(temp)/sizeof(char);
	 
	for(i=0;i<l;i++)
	  a[st[i]-'a']++;
   
	 for(i=0;i<26;i++)
	 {
	 	if(a[i]!=0)
	 	{
	  	strcpy(temp,st);
	    char c=i+'a';
	    remove(p1,p2,c);    	// a.erase(remove(a.begin(),a.end(),'a'),a.end()); if temp=string variable				
	 	s.insert(temp);
	    }	
	 }
	 it=s.begin();
	  cout<<*it;
	  return 0; 	   
}
