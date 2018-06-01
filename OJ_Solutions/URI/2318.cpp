#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
int row[4], col[4], dia[2], mat[4][4];
int hasr[4], hasc[4];
int main()
{
    int major=0, magic=0;
    for(int i = 0, x; i<3; ++i)
    {

        for(int j = 0; j<3; ++j)
        {
            cin>>x;
            mat[i][j] = x;
            row[i]+=x;
            col[j]+=x;
            if(!x)
                ++hasr[i], ++hasc[j];
        }
        magic = max(magic, row[i]);
    }

    for(int i =0; i<3; ++i)
        dia[0]+=mat[i][i], dia[1]+=mat[i][2-i], magic = max(magic, col[i]);

    magic = max(magic, max(dia[0], dia[1]));

    if(dia[0]==0 || dia[1]==0)
        magic = row[1]+row[1]/2,hasr[1]--, hasc[1]--, mat[1][1]  = row[1]/2;

        for(int k = 0; k<2; ++k)
            for(int i = 0, x; i<3; ++i)
                for(int j = 0; j<3; ++j)
                    if(!mat[i][j])
                        if(hasr[i]==1)
                            mat[i][j] = x = magic - row[i], hasr[i]--, hasc[j]--, col[j] += x, row[i] += x;
                        else if(hasc[j]==1)
                            mat[i][j] = x = magic - col[j], hasr[i]--, hasc[j]--, col[j] += x, row[i] += x;

    for(int i = 0; i<3; ++i)
    {
        cout<<mat[i][0];
        for(int j = 1; j<3; ++j)
            cout<<' '<<mat[i][j];
        cout<<'\n';
    }
}
