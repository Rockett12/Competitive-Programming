#include <iostream>
#include <algorithm>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    int n, con=0, resp = 0;;
    char mat[105][105], a;


    cin>>n;

    for(int i = 0; i<n; ++i)
        for(int j = 0; j<n; ++j)
            cin>>mat[i][j];

    for(int i = 0; i<n; ++i)
    {
        if(i&1)
        {
            for(int j = n-1; j>=0; --j)
            {
                if(mat[i][j]=='o')
                    ++con;
                else if(mat[i][j]=='A')
                    con = 0;

                resp = max(resp, con);
            }
        }
        else
        {
            for(int j = 0; j<n; ++j)
            {
                if(mat[i][j]=='o')
                    ++con;
                else if(mat[i][j]=='A')
                    con = 0;

                resp = max(resp, con);
            }
        }

    }

    cout<<resp<<endl;

}

