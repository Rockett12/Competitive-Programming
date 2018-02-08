
#include <iostream>
#include <queue>
#define F first
#define S second
#define _ ios::sync_with_stdio(0);

using namespace std;

typedef pair<int,int> ii;

int main()
{_
    int i, n, m, t, a, b;
    cin>>n>>m;
    priority_queue<ii> pq;
    for(i = 1; i<=n; ++i)
    {
        pq.push(ii(0, i));
    }
    ii atual;
    n = 0;
    while(m--)
    {
        atual = pq.top(); pq.pop();
        t = -atual.F;
        i = atual.S;

        cin>>a>> b;
        if(t-a<0)
            t=a;
        else if(t-a>20)
            ++n;

        t+=b;

        pq.push(ii(-t, i));

    }

    cout<<n<<endl;

}
