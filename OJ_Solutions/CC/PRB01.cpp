#include <iostream>
#include <algorithm>
#include <map>
#define _ ios::sync_with_stdio(0);

using namespace std;
typedef long long int ll;

bool isPrime(int x)
{
    if(x==1)
        return 0;
    for(int i =2; i*i<=x; ++i)
    {
        if(x%i==0)
            return 0;
    }

    return 1;
}

int main()
{_
	int n;
	int i;

    cin>>n;

    while(n--)
    {
        cin>>i;
        if(isPrime(i))
            cout<<"yes\n";
        else cout<<"no\n";
    }

}

