#include <cstdio>
#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define MAXN 99999
#define MAXM 99999
#define pb push_back

using namespace std;

typedef long long int ll;
typedef pair<int,int> ii;
typedef vector<int> vi;
typedef vector<vi> graph;

int main()
{$
	ll n, m=1 , a, b, c, y;
	int sum = 0;
	char x = 'a';
	string s;
	cin>>s;

	for(int i = 0; i<(int)s.size(); ++i)
	{
		if(s[i]<=x)
			s[i]=x++;
		if(x=='z'+1)
			break;
	}
	x--;

	if(x=='z')
		cout<<s<<endl;
	else
		cout<<-1<<endl;

}
