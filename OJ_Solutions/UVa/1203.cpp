
#include <iostream>
#include <vector>
#include <queue>
#include <algorithm>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef vector<int> vi;
typedef pair<int, int> ii;

int main()
{_
    string a;
    int num, peri, n;
    priority_queue<ii, vector<ii>, greater<ii> > pq;
    int v[3005];
    while((cin>>a)&&a!="#")
    {
        cin>>num>>peri;
        v[num] = peri;
        pq.push(ii(peri, num));
    }

    cin>>n;

    while(n--)
    {
        num = pq.top().second;
        peri = pq.top().first;
        pq.pop();
        cout<<num<<endl;
        peri+=v[num];
        pq.push(ii(peri, num));
    }

    return 0;
}
