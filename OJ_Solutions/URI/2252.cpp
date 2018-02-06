#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second

using namespace std;

typedef pair<double, int> ii;
typedef long long int ll;
typedef vector<ii> vi;

bool comp(ii a, ii b)
{
    if(a.F == b.F)
        return a.S <b.S;

    return a.F>b.F;
}

int main()
{_
    int n , b=1;
    string a;
    double f, g, c, d;
    vi edge;
    while(cin>>n)
    {
        edge.clear();
        for(int i =0; i<10; ++i)
        {
            cin>>f;
            edge.push_back(ii(f, i));
        }

        sort(edge.begin(), edge.end(), comp);

        cout<<"Caso "<<b++<<": ";
        for(int i =0; i<n; ++i)
        {
            cout<<edge[i].S;
        }
        cout<<endl;

    }


}

