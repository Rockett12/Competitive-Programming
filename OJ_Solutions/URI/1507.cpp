#include <iostream>
#include <algorithm>
#include  <vector>
#include <cstring>

#include <cstdio>
#define _ ios::sync_with_stdio(0);
#define S second
#define F first
#define MAXN 2005


using namespace std;




int main()
{
    int u, v, w, f, j, n;


    string a, b, c;

    cin>>n;
    while(n--)
    {
        cin>>a;

        cin>>u;
        while(u--)
        {
            cin>>b;
            j =v=0;
            for(int i =0; i<(int)a.size(); ++i)
            {

                if(j == (int)b.size())
                    break;
                if(b[j]==a[i])
                    j++;
            }

            if(j == (int)b.size())
                cout<<"Yes\n";
            else
                cout<<"No\n";
        }
    }


}

