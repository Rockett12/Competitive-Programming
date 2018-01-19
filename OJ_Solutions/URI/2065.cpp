#include <iostream>
#include <queue>
#include <vector>
#include <algorithm>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second
#define PB push_back
using namespace std;
typedef pair<int, int> ii;
typedef long long int ll;

int main()
{_
    int i,n,m,x;
    int total = 0;
    cin>>n>>m;
    priority_queue<ii, vector<ii>, greater<ii> > caixa;
    vector<int> vec(n+1, 0);
    for(i = 1; i<=n; ++i)
    {
        cin>>vec[i];
        caixa.push(ii(0, i));
    }
    ii atual;
    int t;
    while(m--)
    {
        atual = caixa.top();
        caixa.pop();
        cin>>x;
        t = x*vec[atual.S];

        atual.F += t;
        total = max(total, atual.F);
        caixa.push(atual);
    }

    cout<<total<<endl;


}

