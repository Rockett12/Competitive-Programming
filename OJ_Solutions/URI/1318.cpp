#include <iostream>
#include <vector>
#include<algorithm>
#define _ ios::sync_with_stdio(0);
using namespace std;



int main()
{_
    int n,b, resp;
    string a;
    vector<int> v;
    while((cin>>n>>b)&&n)
    {
        v.clear();
        v.resize(n+1, 0);
        resp = 0;
        for(int i =0, c; i<b; ++i)
        {
            cin>>c;

            v[c]++;
            if(v[c]==2)
                resp++;

        }

        cout<<resp<<endl;
    }




}


