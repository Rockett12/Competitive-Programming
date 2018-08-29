#include <cstdio>
#include <algorithm>
#include <stack>
using namespace std;
int main()
{
    int n,a, c,minor,ans;
    stack<int> st;
    while (scanf("%d %d", &a ,&c)&&a) {
        ans = 0;
        while (!st.empty())
            st.pop();
        for (int i = 0, x; i<c; ++i) {
            scanf("%d", &x);
            minor = x;
            while (!st.empty() && st.top() < x)
                minor = min(st.top(), minor), st.pop();
            ans += x-minor;
            st.push(x);
        }
        ans += a-st.top();
        printf("%d\n", ans);
    }
}
