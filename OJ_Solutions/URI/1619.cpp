#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
#include <fstream>
#include <cmath>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define pb push_back
#define MAXN 112345
#define oo 999999999
#define ini 1969
using namespace std;
typedef long long int ll;
int ano[100], mes[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
int mesb[13] = {0, 31, 29, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int main()
{
    for(int i = 2; i<13; ++i)
        mes[i]+=mes[i-1], mesb[i]+=mesb[i-1];

    ano[1970 - ini] = 365;

    for(int i =1970+1; i<=2014; ++i)
        if(!(i%400) || !(i%4) && i%100)
            ano[i-ini] = mesb[12]+ano[i-ini-1];
        else
            ano[i-ini] = mes[12]+ano[i-ini-1];

    int n, a,m, d, A, M, D, res1, res2;
    scanf("%d", &n);

    while(n--)
    {
        scanf("%d-%d-%d %d-%d-%d",&a, &m, &d, &A, &M, &D);

        res1 = ano[a-ini-1]+d;
        res2 = ano[A-ini-1]+D;

        if(!(a%400) || !(a%4) && a%100)
            res1 += mesb[m-1];
        else
            res1 += mes[m-1];
        if(!(A%400) || !(A%4) && A%100)
            res2 += mesb[M-1];
        else
            res2 += mes[M-1];

        printf("%d\n", abs(res1-res2));
    }



}
