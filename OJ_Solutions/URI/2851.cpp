#include <cstdio>
#include <stack>
#define MAXN 112345
#define F first
#define S second
using namespace std;
typedef pair<int,int> ii;
int v[MAXN];
int main() {
    int n;
    scanf("%d", &n);
    stack<ii> st;
    ii tp;
    for (int i = 0, x; i<n; ++i) {
        scanf("%d", &x);
        while (!st.empty() && st.top().F < x)
            v[st.top().S] = x, st.pop();

        st.push({x,i});
    }

    for (int i = 0; i<n; ++i) {
        if (v[i])
            printf("%d%c", v[i], i == n-1?'\n':' ');
        else
            printf("%c%c", '*', i == n-1? '\n':' ');
    }
}
