#include <iostream>
#define $ ios::sync_with_stdio(0);
#define MAXN 1123
using namespace std;
int env[MAXN];
int main()
{$
	int n, k, a;
	cin>>n>>k;
	while(n--)
	{
		cin>>a;
		++env[a];
	}
	n = 999999;
	for (int i = 1; i<=k; ++i)
	{
		n = min(n, env[i]);
	}
	
	cout<<n<<endl;
}