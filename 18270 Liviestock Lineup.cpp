#include <bits/stdc++.h>
#define endl '\n'
typedef long long int lld;
#define rep(i, n) for(int i = 0; i < (n); i++)
#define INF INT_MAX
using namespace std;
const int k=8;
string s[]={"Beatrice", "Belinda", "Bella", "Bessie", "Betsy", "Blue" ,"Buttercup","Sue"};
map<string, string> a;
map<string , bool> check;
queue<string> q;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);	
	int n;
	cin>>n;
	rep(i,k)
	{
		check[s[i]]=false;
	}
	rep(i,n)
	{
		string tmp1,tmp2;
		rep(j,6)
		{
			string str;
			cin>>str;
			if(j==0) tmp1=str;
			if(j==5) tmp2 =str;
		}
		string t= min(tmp1,tmp2);
		if(a.find(t)!=a.end())
		{
			a[t] = max(a[t], max(tmp1,tmp2));
			a[max(tmp1,tmp2)]=t;
		}
		else a[min(tmp1,tmp2)]=max(tmp1,tmp2);
		//cout<<min(tmp1,tmp2)<<" "<<max(tmp1,tmp2)<<endl;
	}
	
	cout<<a["Buttercup"];
	// rep(i,k)
	// {		
	// 	if(check[s[i]]) continue;
	// 	if(a[s[i]].size()==0)
	// 	{
	// 		check[s[i]]=true;
	// 		q.push(s[i]);
	// 	}
	// 	else if(a[s[i]].size()==1)
	// 	{
	// 		q.push(s[i]);
	// 		if(!check[a[s[i]][0]]) q.push(a[s[i]][0]);
	// 		check[s[i]]=true;
	// 		check[a[s[i]][0]]=true;
	// 	}
	// 	else{
	// 		if(a[s[i]][1]>s[i])
	// 		{
	// 			for(int j=i+1;j<k;j++){
	// 				if(a[s[i]][1]>s[j] && !check[s[j]])
	// 				{
	// 					check[s[j]]=true;
	// 					q.push(s[j]);
	// 				}
	// 				else break;
	// 			}
	// 		}
		
	// 		string t1=a[s[i]][1];
	// 		string t2=a[s[i]][0];
	// 		if(!check[min(t1,t2)]) q.push(min(t1,t2));
	// 		q.push(s[i]);
	// 		if(!check[max(t1,t2)]) q.push(max(t1,t2));
	// 		check[s[i]]=true;
	// 		check[a[s[i]][0]]=true;
	// 		check[a[s[i]][1]]=true;
	// 	}
	// }
	// while(!q.empty())
	// {
	// 	cout<<q.front()<<endl;
	// 	q.pop();
	// }

	return 0;
}