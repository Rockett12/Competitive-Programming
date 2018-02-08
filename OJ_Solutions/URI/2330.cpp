#include <iostream>
#include <queue>
#define F first
#define S second
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef pair<int, int> ii;

int v[1005];
int main()
{_
    priority_queue<ii> pq;
    int n, m, i, a;
    cin>>n>>m;
    for(i =1; i<=n; ++i)
        pq.push(ii(0, -i));

    ii atual;
    while(m--)
    {
        atual = pq.top(); pq.pop();
        cin>>a;
        atual.F-=a;
        v[-atual.S]+=1;
        pq.push(atual);
    }

    for(i = 1; i<=n; ++i)
        cout<<i<<" "<<v[i]<<endl;


}
