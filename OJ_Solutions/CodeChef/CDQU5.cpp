#include <iostream>
#include <vector>
#include<cstring>
#include <stack>
#define _ ios::sync_with_stdio(0);
#define MOD 1000000009;
using namespace std;
typedef long long int ll;

typedef vector<vector<ll> > matrix;

matrix cross(matrix A, matrix B)
{
    matrix C(4, vector<ll>(4, 0));


    for(int i =1; i<=3; ++i)
        for(int j =1; j<=3; ++j)
            for(int k =1; k<=3; ++k)
                C[i][j] =(C[i][j]+A[i][k]*B[k][j])%MOD;

    return C;
}

matrix mexp(matrix A, int exp)
{

    matrix C(4, vector<ll>(4, 0));
    for(int i=1; i<=3; ++i)
        C[i][i]=1;

    while(exp)
    {
        if(exp&1)
            C = cross(C, A);

        A = cross(A, A);
        exp>>=1;
    }


    return C;
}

int rec(int a)
{
    if(a == 2 || a==3)
        return 1;
    if(a<2)
        return 0;

    vector<ll> pt(4), resp(4, 0);
    pt[1] = pt[2] =1;
    pt[3] =0;

    matrix T(4, vector<ll>(4, 0));

    T[1][2] = T[1][3] = T[2][1] = T[3][2] = 1;




    T = mexp(T, a-1);


    for(int i = 1; i<4; ++i)
        for(int j = 1; j<4; ++j)
        {
            resp[i] =(resp[i]+T[i][j]*pt[j])%MOD;
        }

    return (int) resp[3];
}


int main()
{_

    int a;
    ll n;

    int t;
    cin>>t;
    while(t--)
    {
        cin>>a;
        a = rec(a);
        cout<<a<<endl;
    }




}

