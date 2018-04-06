#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int a, b;
    cin>>a>>b;
    b = abs(a-b);
    b = ceil(a/(double)b)+1;
    cout<<b<<"\n";
}
