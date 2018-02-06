#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;

int main()
{_
    unsigned int n , b;
    while(cin>>n>>b)
    {
        cout<<(n^b)<<endl;
    }
}
