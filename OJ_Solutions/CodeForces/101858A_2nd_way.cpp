#include <cstdio>
#include <vector>
#define mod 1000000007LL
#define K 2
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> matrix;
matrix mcross(matrix a, matrix b){
    matrix c = {{0,0},{0,0}};
    for(int i = 0; i<K; ++i)
        for(int j = 0; j<K; ++j)
            for(int k = 0; k<K; ++k)
                c[i][j] = (c[i][j]+((a[i][k]*b[k][j])%mod))%mod;

    return c;
}

int mxp(matrix base, int exp){
    matrix ans = {{1,0},{0,1}};
    while(exp){
        if(exp&1)
            ans = mcross(base, ans);
        base = mcross(base,base);
        exp>>=1;
    }
    return (int)ans[1][1];
}
int main(){
    int n;
    matrix MT = {{1, 1},{2,3}};
    scanf("%d", &n);
    if(n&1)
        puts("0");
    else
        printf("%d\n", mxp(MT, n>>1));
}
