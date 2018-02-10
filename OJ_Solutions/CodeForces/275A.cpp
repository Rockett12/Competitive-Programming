#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define pb push_back

using namespace std;
int mat[5][5], dx[] ={-1, 0, 1, 0 ,-1};

void tog(int i, int j)
{
    mat[i][j] = !mat[i][j];

    for(int k = 0, a, b; k<4; ++k)
    {
        a = i+dx[k];
        b = j+dx[k+1];
        mat[a][b] = !mat[a][b];
    }
}
int main()
{$
    int n;
    for(int i =1; i<4; ++i)
    {
        for(int j = 1 ; j<4; ++j)
        {
            cin>>n;
            if(n&1)
                tog(i, j);
        }

    }

    for(int i =1; i<4; ++i)
    {
        for(int j = 1 ; j<4; ++j)
            cout<<!mat[i][j];

        cout<<endl;
    }
}

