#include <iostream>
#define _ ios::sync_with_stdio(0);

using namespace std;

double sq10(int i)
{
    if(!i)
        return 0;
    return 1.0/(6+sq10(i-1));
}

int main()
{_
    double a=3;
    int i;
    cin>>i;
    cout.precision(10);
    cout.setf(ios::fixed);
    cout<<a+sq10(i)<<endl;

}

