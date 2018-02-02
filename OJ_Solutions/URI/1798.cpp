#include <iostream>
#include <algorithm>
#include  <vector>
#include <cstring>
#define _ ios::sync_with_stdio(0);



using namespace std;
typedef pair< int, int > ii;
typedef pair<int, ii> pii;
int mat[1005][2005], obj[1005], valor[1005], n, m;

int sack(int ob,int mon)
{
    if(ob>=n || mon<=0)
        return 0;
    if(mat[ob][mon]!=-1)
        return mat[ob][mon];
    int somax = sack(ob+1, mon);

    if(mon>=obj[ob])
        somax = max(somax, sack(ob, mon-obj[ob])+valor[ob]);

    return mat[ob][mon] = somax;

}

int main()
{_

    int a, b, c;

    cin>>n>>m;
    memset(mat, -1, sizeof(mat));
    for(int i =0; i<n; ++i)
    {
        cin>>obj[i]>>valor[i];
    }

    cout<< sack(0, m) <<endl;

}

