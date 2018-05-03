#include <cstdio>
#include <algorithm>
using namespace std;
int main(){
    int n, m, major = -1, a,f;
    scanf("%d %d", &n, &m);
    int last;
    scanf("%d", &last);
    --m;
    f = last-1;
    while(m--)
    {
        scanf("%d", &a);
        if(a-last>major)
            major = a-last;
        last = a;
    }

    major>>=1;
    major = max(major, max(f,n-last));
    printf("%d\n", major);

}

