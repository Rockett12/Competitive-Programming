#include <iostream>
#include <algorithm>
#include <set>

#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{
    int t;
    string a;
    set<string> ali;
    while((cin>>t)&&t)
    {
        ali.clear();

        while(t--)
        {
            cin>>a;
            sort(a.begin(), a.end());
            ali.insert(a);
        }

        cout<<(int)ali.size()<<endl;
    }
}
