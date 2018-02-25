#include <iostream>
#include <algorithm>
#include <vector>
#include <fstream>
#define $ ios::sync_with_stdio(0);
#define F first
#define S second
#define pb push_back
#define MAXN 112345
#define oo 999999999
using namespace std;
typedef long long int ll;
int v[MAXN];

int main()
{$
    int t, n, x;
    cin>>n;
    if(!(x = n%10))
        cout<<n<<endl;
    else if(x<5)
        cout<<n-x<<endl;
    else
        cout<<n-x+10<<endl;

}

