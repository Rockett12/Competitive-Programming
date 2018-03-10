#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
string rom[3][10] ={{"", "I", "II", "III", "IV", "V", "VI", "VII", "VIII", "IX"},
                    {"", "X", "XX", "XXX", "XL", "L", "LX", "LXX", "LXXX", "XC"},
                    {"", "C", "CC", "CCC", "CD", "D", "DC", "DCC", "DCCC", "CM"}};

int main()
{$
    string a;
    cin>>a;
    for(int i =0, j = (int)a.size()-1; i<(int)a.size(); ++i, --j)
        cout<<rom[j][a[i]-'0'];

    cout<<endl;
}
