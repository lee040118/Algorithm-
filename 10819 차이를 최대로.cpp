#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int arr[9],res;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	cin>>n;
	rep(i,n)
	{
		cin>>arr[i];
	}
	sort(arr,arr+n);
	do{
		int tmp=0;
		for(int i=0;i<n-1;i++)
		{
			tmp+=abs(arr[i]-arr[i+1]);
		}
		//cout<<tmp<<endl;
		res=max(res,tmp);
	}while(next_permutation(arr,arr+n));
	cout<<res;
	return 0;
}