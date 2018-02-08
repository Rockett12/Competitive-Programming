#include <iostream>
#define _ ios::sync_with_stdio(0);
using namespace std;

double sq2(int i)
{
    if (!i)
        return 0;
    return 1.0/(2+sq2(i-1));
}

int main()
{_
    double a = 1;
    cout.precision(10);
    cout.setf(ios::fixed);
    int i;
    cin>>i;
    cout<<a+sq2(i)<<endl;
}

