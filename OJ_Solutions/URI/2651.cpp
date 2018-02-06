
#include <iostream>
#include <vector>
#include <algorithm>
#include <cmath>
#define _ ios::sync_with_stdio(0);
#define F first
#define S second

using namespace std;

int main()
{_

    string a;


    getline(cin, a);

    transform(a.begin(), a.end(), a.begin(), ::tolower);

    if(a.find("zelda")!=a.npos)
        cout<<"Link Bolado\n";
    else cout<<"Link Tranquilo\n";


}

