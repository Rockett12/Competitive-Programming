#include <cstdio>
#include <cmath>
using namespace std;
double din[1005];

bool prime(long long int n)
{

    for(long long int i =2; i*i<=n; ++i)
        if(n%i==0)
            return 1;
    return 0;
}
int main()
{
    long long int n;
    scanf("%lld", &n);
    if(prime(n))
        puts("S");
    else
        puts("N");
}

