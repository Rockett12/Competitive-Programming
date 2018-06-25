#include <iostream>
#include <algorithm>
#include <vector>
#include <map>
#include <cstdio>
#include <cstring>
#include <queue>
#define MAXN 112345
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int, int> ii;
const int INF = 0x3f3f3f3f;

char mat[55][55];
void fill1(char x, int  lx,int ux,int ly,int uy)
{
    for(int i = lx; i<=ux; ++i)
        for(int j = ly; j<=uy; ++j)
            mat[i][j] = x;
}
void fill2(char x, int num,  int  lx,int ux,int ly,int uy)
{
    for(int i = lx; i<=ux && num; i+=2)
        for(int j = ly; j<=uy && num; j+=2)
            mat[i][j] = x, num--;
}


int v[4];
int main()
{$
    int n , m, op;
    for(int& i : v)
        cin>>i;
    int k = 0;
    fill1('A', 1, 25, 1, 25);
    fill1('B', 1, 25, 26, 50);
    fill1('C', 26, 50, 1, 25);
    fill1('D', 26, 50, 26, 50);

    fill2('D', v[3]-1, 1, 25, 1, 25);
    fill2('C', v[2]-1, 1, 25, 26, 50);
    fill2('B', v[1]-1, 26, 50, 1, 25);
    fill2('A', v[0]-1, 26, 50, 26, 50);

    cout<<"50 50\n";
    for(int i = 1; i<=50; ++i){
        for(int j = 1; j<=50; ++j)
            cout<<mat[i][j];
        cout<<endl;
    }
}
