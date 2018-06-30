#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
typedef vector<int> vi;
typedef vector<vi> graph;

int main()
{
    int sum = 0;
    int n, a;
    cin>>n;
    vector<int> m;
    m.resize(n);
    for(auto& i: m)
        cin>>i, sum+=i;

    sort(m.begin(), m.end());

    int j = 0;
    while(sum*2<9*n)
        sum += -m[j++] + 5;

    cout<<j<<endl;

}
