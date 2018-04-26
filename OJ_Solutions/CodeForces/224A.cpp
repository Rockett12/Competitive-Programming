#include <iostream>
#include <cmath>
#include <cctype>
#define $ ios::sync_with_stdio(0);
using namespace std;
typedef long long int ll;
int main()
{$
    int a,b,c;
    cin>>a>>b>>c;
    cout<<(int)4*(sqrt(a*c/b)+sqrt(b*c/a)+sqrt(a*b/c))<<'\n';
}
