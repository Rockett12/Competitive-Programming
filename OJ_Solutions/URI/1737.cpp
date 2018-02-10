#include <iostream>
#include <queue>
#include <vector>
#include <map>
#include <algorithm>
#include <cmath>
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;
typedef map<string, int> mp;
typedef pair<int, string> ii;
bool comp(ii a, ii b)
{
    if(a.F==b.F)
        return a.S<b.S;
    return a.F>b.F;
}

int main()
{$
    int n;
    string a, s;
    mp m;
    cout.precision(6);
    cout.setf(ios::fixed);
    vector<ii> v;
    while((cin>>n)&&n)
    {
        m.clear();
        v.clear();
        cin.ignore();
        a="";
        while(n--)
        {
            getline(cin, s);
            a+=s;
        }
        for(int i =1; i<(int)a.size(); ++i)
        {
            s="";
            s += a[i-1];
            s+=a[i];

            if(m.find(s)!=m.end())
                m[s]++;

            else m[s]=1;
        }

        n=0;
        int tam = m.size();
        mp::iterator it = m.begin();

        for(; it!=m.end(); it++)
        {
            v.pb(ii(it->S, it->F));
            n+= it->S;
        }
        sort(v.begin(), v.end(), comp);



        for(int i=0; i<5; i++ )
            cout<< v[i].S << " "<< v[i].F << " " << v[i].F/(double)n<<endl;

        cout<<endl;
    }

}

