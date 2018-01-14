#include <iostream>
#include <set>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    set<string> sig;
    string a;
    int t, m=0;
    cin>>t;
    while(t--)
    {
        cin>>a;
        sig.insert(a);
    }
    m = 151-(int)sig.size();

    cout<<"Falta(m) "<<m<< " pomekon(s)."<<endl;
}

