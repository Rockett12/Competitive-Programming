#include <vector>
#include <cstdio>
using namespace std;

typedef long long int ll;
typedef vector<vector<ll> > matrix;
int K = 2;

matrix mCross(matrix A, matrix B)
{
    matrix C(K+1, vector<ll>(K+1, 0));

    for(int i = 1; i<=K; ++i)
        for(int j = 1; j<=K; ++j)
            for(int k = 1; k<=K; ++k)
                C[i][j]+= A[i][k]*B[k][j];

    return C;
}

matrix mExp(matrix A, int exp)
{
    matrix B(K+1, vector<ll>(K+1, 0));
    B[1][1] = 1;
    B[2][2] = 1;
    while(exp)
    {
        if(exp&1) B = mCross(B, A);

        A = mCross(A, A);
        exp>>=1;
    }

    return B;
}

ll fib(int n)
{
    vector<ll> mpt(K+1);
    mpt[1] = 1;
    mpt[2] = 1;

    matrix MT(K+1, vector<ll>(K+1));
    MT[1][1] = 1; MT[1][2] = 1;
    MT[2][1] = 1; MT[2][2] = 0;

    if(n<=1) return 1;
    MT = mExp(MT, n);

    ll resp = 0;
    for(int i = 1; i<=K; ++i)
        resp += MT[2][i]*mpt[i];

    return resp;
}


int main()
{
    int n;
    scanf("%d", &n);
    printf("%lld\n", fib(n));
}

