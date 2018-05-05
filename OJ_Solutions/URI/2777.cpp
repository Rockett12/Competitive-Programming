#include <cstdio>
#include <vector>
#define mod 1000000007LL
using namespace std;

int v[] = {1,1,2,2}, N =4;

typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vector<ll> >matrix;
matrix MT(N, vi(N, 0)), getback;
vi MPT(N, 0);
matrix cross(matrix A, matrix B)
{
    matrix C(N, vi(N, 0));

    for(int i = 1; i<=3; ++i)
        for(int j = 1; j<=3; C[i][j++]%=mod)
            for(int k = 1; k<=3; ++k)
                C[i][j] += (A[i][k] *B[k][j])%mod;

    return C;
}

matrix expmat(matrix A, ll exp)
{
    matrix resp(N, vi(N, 0));
    resp[1][1] = resp[2][2] = resp[3][3] = 1;
    while(exp)
    {
        if(exp&1LL)
            resp = cross(resp, A);
        A = cross(A,A);
        exp>>=1LL;
    }
    return resp;

}

ll linrec(ll n)
{
    ll resp=0;
    if(n<=3)
        return v[n];
    getback = expmat(MT, n-3);

    for(int i =1; i<=3; ++i)
        resp+=(MPT[i]*getback[1][i])%mod, resp%=mod;

    return resp;

}


int main()
{
    ll n;

    MPT[1] = 2, MPT[2] = 2, MPT[3] = 1;
    MT[1][2] = MT[1][3] = MT[2][1] = MT[3][2] =1;

    while(scanf("%lld", &n)!=EOF)
        printf("%lld\n", linrec(n));

}
