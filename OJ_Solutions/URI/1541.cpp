#include <iostream>
#include <cmath>
#define $ ios::sync_with_stdio(0);

using namespace std;

int main()
{$
    int n, a, b;

    while((cin>>n)&&n)
    {
        cin>>a>>b;
        n = sqrt(n*a*100/(double)b);
        cout<<n<<endl;

    }
}

