#include <cstdio>
#include <algorithm>
using namespace std;
int v[11234];
int main()
{
    int n;
    scanf("%d", &n);
    for(int i = 0; i<n; ++i){
        scanf("%d", v+i);
    }

    sort(v, v+n);

    bool f = 1;
    if(v[0]>8)
        f = 0;

    if(f){
        for(int i = 1; i<n && f; ++i){
            if(v[i]-v[i-1]>8)
                f = 0;
        }
    }

    printf("%c\n", f ? 'S':'N');

}

