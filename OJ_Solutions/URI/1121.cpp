#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    int n, m, s, x, y, z, cont;
    string a;
    char mat[105][105];

    while((cin>>n>>m>>s)&&n)
    {
        cont = 0;
        for(int i =1; i<=n; ++i)
            for(int j =1; j<=m; ++j)
            {
                cin>>mat[i][j];
                if(mat[i][j]=='N' ||
                mat[i][j]=='S' ||
                mat[i][j]=='L' ||
                mat[i][j]=='O')
                {
                    x = i; y = j;
                    if(mat[i][j]=='N')
                        z = 0;
                    else if(mat[i][j]=='L')
                        z=1;
                    else if(mat[i][j]=='S')
                        z=2;
                    else
                        z=3;
                }
            }

        for(int i =0; i<=101; ++i)
        {
            mat[i][0] = 'x';
            mat[0][i] = 'x';
            mat[i][m+1] = 'x';
            mat[n+1][i] = 'x';

        }

        cin>>a;

        for(int i = 0; i<(int)a.size(); ++i)
        {
            if(a[i]=='D')
                z = (z+1)%4;
            else if(a[i]=='E')
            {
                z--;
                if(z<0)
                    z+=4;
            }
            else
            {
                if(z==0)
                {
                    if(mat[x-1][y]!='x' && mat[x-1][y]!='#')
                    {
                        if(mat[x-1][y]=='*')
                            ++cont;

                        mat[x-1][y] = '.';
                        --x;
                    }
                }
                else if(z==1)
                {
                    if(mat[x][y+1]!='x' && mat[x][y+1]!='#')
                    {
                        if(mat[x][y+1]=='*')
                            ++cont;

                        mat[x][y+1] = '.';
                        ++y;
                    }
                }
                else if(z==2)
                {
                    if(mat[x+1][y]!='x' && mat[x+1][y]!='#')
                    {
                        if(mat[x+1][y]=='*')
                            ++cont;

                        mat[x+1][y] = '.';
                        ++x;
                    }
                }
                else
                {
                    if(mat[x][y-1]!='x' && mat[x][y-1]!='#')
                    {
                        if(mat[x][y-1]=='*')
                            ++cont;

                        mat[x][y-1] = '.';
                        --y;
                    }
                }
            }



        }

        cout<<cont<<endl;
    }


    return 0;
}
