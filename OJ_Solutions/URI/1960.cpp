#include <iostream>
#define $ ios::sync_with_stdio(0);

using namespace std;
string rom[3][10];
void init()
{
    rom[0][0] = "";
    rom[0][1] = "I";
    rom[0][2] = "II";
    rom[0][3] = "III";
    rom[0][4] = "IV";
    rom[0][5] = "V";
    rom[0][6] = "VI";
    rom[0][7] = "VII";
    rom[0][8] = "VIII";
    rom[0][9] = "IX";

    rom[1][0] = "";
    rom[1][1] = "X";
    rom[1][2] = "XX";
    rom[1][3] = "XXX";
    rom[1][4] = "XL";
    rom[1][5] = "L";
    rom[1][6] = "LX";
    rom[1][7] = "LXX";
    rom[1][8] = "LXXX";
    rom[1][9] = "XC";

    rom[2][0] = "";
    rom[2][1] = "C";
    rom[2][2] = "CC";
    rom[2][3] = "CCC";
    rom[2][4] = "CD";
    rom[2][5] = "D";
    rom[2][6] = "DC";
    rom[2][7] = "DCC";
    rom[2][8] = "DCCC";
    rom[2][9] = "CM";
}

int main()
{$
    string a;
    cin>>a;
    init();
    for(int i =0, j = (int)a.size()-1; i<(int)a.size(); ++i, --j)
        cout<<rom[j][a[i]-'0'];

    cout<<endl;
}

