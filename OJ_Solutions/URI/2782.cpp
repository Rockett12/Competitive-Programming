#include <cstdio>
#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> diff;
    int n , m, cur, ans = 0;
    scanf("%d", &n);
    scanf("%d", &m);
    while(--n)
    {
        scanf("%d", &cur);
        diff.push_back(cur-m);
        m = cur;
    }
    if(!diff.empty())
        m = diff[0];

    for(int i : diff)
        if(m!=i)
            ++ans, m = i;

    printf("%d\n", ans+1);

}

