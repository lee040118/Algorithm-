#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
int arr[200001];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	long long l;
	cin>>n>>l;
	rep(i,n) cin>>arr[i];
	double  s=0;
	for(int i=n-1;i>0;i--)
	{
		s+=arr[i];
		//cout<<s<<endl;
		double tmp=s/(n-i);
		//printf("%f %lld %lld\n",tmp, arr[i-1]-l,arr[i-1]+l );
		if(tmp<=arr[i-1]-l || tmp>=arr[i-1]+l)
		{
			cout<<"unstable";
			return 0;
		}
	}
	cout<<"stable";
	
	return 0;
}