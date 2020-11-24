#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int arr[100001],ans;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	cin>>n;
	rep(i,n) cin>>arr[i];
	sort(arr,arr+n);
	for(int i=n-1;i>n/2;i--)
	{
		ans+=arr[i]*2;
	}
	if(n%2==0) ans+=(2*arr[n/2]);
	else ans+=arr[n/2];
	cout<<ans;
	return 0;
}