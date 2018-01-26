#include <iostream>
#include <vector>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef long long int ll;


ll bbin(ll x)
{
	ll ini = 1, fim = 2000000000, mid, inter, resp=1;
	while(ini<=fim)
	{
		mid = (ini+fim)>>1;
		inter = (mid*(mid+1))>>1;
		if(inter == x)
			return mid;
		if(inter < x)
			resp = mid, ini = mid+1;
		else
			fim = mid-1;
	}

	return resp;


}

int main()
{_
	ll k, b;
	int n;
	string a;
	vector<string> v;
	while((cin>>n>>k)&&n)
	{
		v.clear();
		for(int i = 0; i<n; ++i)
		{
			cin>>a;
			v.push_back(a);
		}

		b = bbin(k);
		if(b&1)
			k--;
		else
			k +=(b>>1)-1 ;

        k%=b;
		cout<<v[k]<<endl;


	}


}

