#include <iostream>
#include <algorithm>
#include <vector>
#define _ ios::sync_with_stdio(0);
using namespace std;
vector<int> v;

int bbin(int x)
{
    int ini = 1, fim = (int)v.size(), mid,resp=-1;

    while(ini<=fim)
    {
        mid = ini+fim;
        mid>>=1;

        if(v[mid]==x)
            resp = mid, fim = mid-1;
        else if (v[mid]>x)
            fim = mid-1;
        else
            ini = mid+1;

    }

    return resp;

}

int main()
{_
    int n, m, i =1, a;

    while((cin>>n>>m)&&n)
    {
        v.clear();
        v.push_back(-999999);
        while(n--)
        {
            cin>>a;
            v.push_back(a);
        }
        sort(v.begin(), v.end());

        cout<<"CASE# "<<i++<<":\n";

        while(m--)
        {
            cin>>a;
            n = bbin(a);
            if(n!=-1)
                cout<<a<<" found at "<<n<<endl;
            else
                cout<<a<<" not found\n";
        }


    }
}

