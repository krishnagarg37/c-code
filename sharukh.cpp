#include<bits/stdc++.h>

#define int long long
#define pii pair<int,int>
#define X first
#define Y second

const int mod=(int)1e9+7;
const int inf=(int)1e18;

using namespace std;


signed main()
{
	ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	
	//freopen("input.txt","r",stdin);
	//freopen("output.txt","w",stdout);
	
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		if(n==2)
		{
			cout<<1<<" "<<2<<"\n";
			continue;
		}
		int first=2*n+1;
		int temp=pow(2,((int)log2(n))+1);
		first-=temp;
		int second=2*n+1;
		int x=n-1;
		temp=3*(pow(2,(int)ceil(log2(ceil(n/3.0)))));
		second=second-temp;
		cout<<first<<" "<<second<<"\n";
	}

	return 0;
} 

