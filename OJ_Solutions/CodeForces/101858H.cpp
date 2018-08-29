#include <bits/stdc++.h>
#define F first
#define S second
#define INF 0x3f3f3f3f
#define $ ios::sync_with_stdio(0);
#define MAXM 1000005
#define K 3
using namespace std;
typedef long long int ll;
typedef vector<ll> vi;
typedef vector<vi> matrix;

matrix mcross(matrix A, matrix B){
    matrix C = {{0,0,0},{0,0,0},{0,0,0}};
    for(int i = 0; i<K; ++i)
        for(int j = 0; j<K; ++j)
            for(int k = 0; k<K; ++k)
                C[i][j] += A[i][k]*B[k][j];

    return C;
}

matrix mxp(matrix base, int exp){
    matrix ans = {{1,0,0}, {0,1,0}, {0,0,1}};
    while(exp){
        if(exp&1)
            ans = mcross(base, ans);
        base = mcross(base, base);
        exp>>=1;
    }
    return ans;
}

double sol(double n, int exp, double p){
    if(!exp)
        return n;
    matrix MT = {{1,1,2},{0,1,0},{0,0,1}};
    MT = mxp(MT, exp);
    return (double)MT[0][0]*n-(double)MT[0][1]+(double)MT[0][2]*p;
}

int main()
{
    int a;
    double n, p;
    cin >> n >> a >> p;
    cout << fixed;
    cout.precision(10);
    cout<<sol(n,a,p/100.0)<<endl;
}
