#include <iostream>
#include <algorithm>
#include <queue>
#define _ ios::sync_with_stdio(0);


using namespace std;

int v[105][105], dx[] = {-1, 0,1,0,-1};
bool flagg[105][105];

int main()
{_
    queue<int> q;
    int n, i, j, m, t;
    cin>>n;
    cin>>i>>j;

    for(int k = 1; k<=n; ++k)
        for(int h = 1; h<=n; ++h)
            cin>>v[k][h];

    q.push(i);
    q.push(j);
    n = 1;
    flagg[i][j] = 1;

    while(!q.empty())
    {
        i = q.front();
        q.pop();
        j = q.front();
        q.pop();

        for(int k = 0; k<4; ++k)
        {
            m = i+dx[k];
            t = j+dx[k+1];
            if(!flagg[m][t] && v[m][t]>= v[i][j])
            {
                q.push(m);
                q.push(t);
                n++;
                flagg[m][t]=1;
            }
        }
    }

    cout<<n<<endl;

}

