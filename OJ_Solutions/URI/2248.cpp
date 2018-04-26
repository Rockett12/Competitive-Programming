#include <iostream>
#include <vector>
#include <queue>
#define pb push_back
#define F first
#define S second
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef pair<int,int> ii;
int main()
{$
    int n, m, id, nota, i = 1;
    queue<ii> q;
    while(cin>>n && n)
    {
        nota = 0;
        while(n--)
        {
            cin>>id>>m;
            if(m>=nota)
                q.push(ii(id, m)), nota = m;
        }

        while(!q.empty() && q.front().S!= nota) q.pop();

        cout<<"Turma "<<i++<<'\n';

        while(!q.empty())
            cout<<q.front().F<<' ', q.pop();
        cout<<'\n'<<'\n';
    }
}
