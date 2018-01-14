#include <iostream>
#include <set>
#include <algorithm>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_

    int t, n, a;
    cin>>t;
    set<int> seth;
    while(t--)
    {
        seth.clear();
        cin>>n;
        while(n--)
        {
            cin>>a;
            seth.insert(a);
        }

        cout<<(int)seth.size()<<endl;
    }

    return 0;
}

