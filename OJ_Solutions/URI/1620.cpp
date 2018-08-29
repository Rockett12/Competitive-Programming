#include <cstdio>
#include <iostream>
using namespace std;
int main(){
    long double l;
    cout << fixed;
    cout.precision(6);

    while(cin >> l && l>0.000000001) {
        cout<< (double)1.0-3.0/l <<'\n';
    }
}
