#include <iostream>
#include <map>
#define $ ios::sync_with_stdio(0);

using namespace std;
typedef map<string, int> mp;
int main()
{$
	cout.precision(4);
    cout.setf(ios::fixed);
    mp m;
    mp::iterator it;
    int t;
    cin>>t;
    string s;
    getline(cin, s);
    getline(cin, s);
    double tot;
    while(t--)
    {
        tot = 0.0;
        m.clear();
        while(getline(cin, s))
        {
            if(s=="")
            {
                it = m.begin();
                for(; it!=m.end(); ++it)
                {
                    cout<<it->first << " "<< 100*it->second/tot <<endl;
                }
                cout<<endl;
                break;
            }
            ++tot;
            if(m.find(s)!=m.end())
                ++m[s];
            else
                m[s]=1;
        }
    }

    it = m.begin();
    for(; it!=m.end(); ++it)
    {
        cout<<it->first << " "<< 100*it->second/tot <<endl;
    }
}

