#include <iostream>
#include <vector>
#include <algorithm>
#include <fstream>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
using namespace std;
typedef pair<int, int > ii;

vector<ii> par(11234);
bool comp(ii a, ii b)
{
	if(a.F==b.F)
    {
        if((a.S&1)==(b.S&1))
        {
            if(a.S&1)
            {
                return a.S > b.S;
            }

            return a.S < b.S;
        }

        return (a.S&1)>(b.S&1);
	}

	return a.F<b.F;
}


int main()
{$
    int n, m;
//    ifstream fin("a.in");
//    ofstream fout("a.out");
    while((cin>>n>>m)&&n)
    {
        for(int  i = 0, a, b; i<n; ++i)
        {
            cin>>a;
            par[i]=ii(a%m, a);
        }

        sort(par.begin(), par.begin()+n, comp);
        cout<<n<<" "<<m<<endl;
        for(int i =0; i<n; ++i)
        {
            cout<<par[i].S<<endl;
        }
    }
    cout<<"0 0\n";

}

