#include <iostream>
#include <queue>
#include <vector>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef pair<int, int> ii;
typedef long long int ll;

int main()
{_
    ll tc, total, twait;
    int n, t, c;
    priority_queue<ii, vector<ii>, greater<ii> > tin, tout;
    ii atual;


    while(cin>>n)
    {
        tc = 1;
        total = 0;

        while(n--)
        {
            cin>>t>>c;
            tout.push(ii(t, c));
        }

        while(!tout.empty())
        {
            while(!tout.empty() && (ll)tout.top().first<=tc)
            {
                atual = tout.top();
                tin.push(ii(atual.second, atual.first));
                tout.pop();
            }

            if(!tin.empty())
            {
                atual = tin.top();
                tin.pop();
            }
            else
            {
                atual.first = tout.top().second;
                atual.second = tout.top().first;
                tout.pop();
            }

            twait = tc - (ll)atual.second;
            if(twait > 0)
                total+= twait ;
            else
                tc-=twait;

            tc+=(ll)atual.first;
        }

        while(!tin.empty())
        {
            atual = tin.top();
            tin.pop();

            twait = tc - (ll)atual.second;
            if(twait > 0)
                total+= twait ;
            else
                tc-=twait;

            tc+=(ll)atual.first;
        }

        cout<<total<<endl;
    }

}

