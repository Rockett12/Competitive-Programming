#include <cstdio>
#include <algorithm>
#define MAXN 112345
#define RANGE 100000000
using namespace std;
typedef long long int ll;

int v[MAXN];
int main(){
    int n,f ;
    scanf("%d %d", &n,  &f);
    for(int i = 0; i<n; ++i){
        scanf("%d", v+i);
    }
    int ans = 0, cur, sum;
    for(int s = RANGE>>1; s; s>>=1){
        cur = ans+s;
        while(cur<=RANGE){
            sum = 0;
            for(int i = 0; i<n; ++i)
                sum+=cur/v[i];

            if(sum<f) ans+=s, cur = ans+s;
            else break;
        }
    }

    printf("%d\n", ans+1);
}

